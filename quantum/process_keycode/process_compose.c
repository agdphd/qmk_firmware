/* Copyright 2020 Google LLC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef COMPOSE_ENABLE

#    include "process_compose.h"
#    include "print.h"
#    include <string.h>

__attribute__((weak)) void compose_start(void) {}

__attribute__((weak)) void compose_end(bool valid_sequence) {}

static const FLASHMEM ComposeTrie* current = NULL;

bool compose_active(void) {
    return current != NULL;
}

// NOTE: Return false to short-circuit processing for this record or true to
// allow it to pass to other processors.
bool process_compose(uint16_t keycode, keyrecord_t* record) {
    if (!record->event.pressed) return true;

    if (!compose_active()) {
        if (keycode != COMPOSE) {
            return true;
        }
        dprintf("Start compose sequence.\n");
        compose_start();
        current = compose_trie;
        return false;
    }

    if (keycode == COMPOSE) {
        dprintf("Compose key struck twice. Exiting compose mode.\n");
        compose_end(false);
        current = NULL;
        return false;
    }

#    ifndef COMPOSE_KEY_STRICT_KEY_PROCESSING
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        keycode = keycode & 0xFF;
        dprintf("Compose remapped key to: %d.\n", keycode);
    }
#    endif  // COMPOSE_KEY_STRICT_KEY_PROCESSING

    // Scan the current level of the trie for a matching keycode.
    while (current->keycode != keycode && current->sibling != NULL) {
        current = current->sibling;
    }

    // If we don't find one, this is an invalid compose sequence. Clean up
    // and exit, returning true so the failing keycode is handled downstream.
    if (current->keycode != keycode) {
        dprintf("Keycode not in compose sequence: %d\n", keycode);
        dprintf("Exiting compose mode.\n");
        compose_end(false);
        current = NULL;
        return true;
    }

    dprintf("Keycode in compose sequence: %d.\n", keycode);

    // Otherwise, this is still a valid sequence.
    // If it's the end of the sequence, print the result.
    if (current->output != NULL) {
        dprintf("Finished compose sequence, printing '%s'.\n", current->output);
        compose_end(true);
#    ifdef UNICODE_ENABLE
        send_unicode_string(current->output);
#    else
        send_string(current->output);
#    endif
        current = NULL;
        return false;
    }

    // And if it's not the end, descend a level for the next key.
    if (current->child != NULL) {
        current = current->child;
        return false;
    }

    // If we get here, the trie is malformed. OH NO VERY BAD
    dprintf("Malformed trie: last node has neither output nor child.\n");
    return true;
}

#endif
