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

#pragma once

#include "quantum.h"

typedef struct ComposeTrie {
    uint16_t            keycode;
    const char*         output;
    struct ComposeTrie* sibling;
    struct ComposeTrie* child;
} ComposeTrie;

extern const ComposeTrie __attribute__((weak)) compose_trie;

bool process_compose(uint16_t keycode, keyrecord_t* record);

void compose_start(void);
void compose_end(bool valid_sequence);

bool compose_active(void);
