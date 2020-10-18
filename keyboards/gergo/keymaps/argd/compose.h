const ComposeTrie compose_trie ={
.keycode = KC_MINS,
.sibling = &(struct ComposeTrie)
    {
    .keycode = KC_O,
    .sibling = &(struct ComposeTrie)
        {
        .keycode = KC_DOT,
        .sibling = &(struct ComposeTrie)
            {
            .keycode = KC_LSFT,
            .sibling = &(struct ComposeTrie)
                {
                .keycode = KC_PLUS,
                .sibling = &(struct ComposeTrie)
                    {
                    .keycode = KC_A,
                    .sibling = &(struct ComposeTrie)
                        {
                        .keycode = KC_C,
                        .sibling = &(struct ComposeTrie)
                            {
                            .keycode = KC_L,
                            .sibling = &(struct ComposeTrie)
                                {
                                .keycode = KC_S,
                                .sibling = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_P,
                                    .sibling = &(struct ComposeTrie)
                                        {
                                        .keycode = KC_T,
                                        .sibling = &(struct ComposeTrie)
                                            {
                                            .keycode = KC_X,
                                            .sibling = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_SLSH,
                                                .sibling = &(struct ComposeTrie)
                                                    {
                                                    .keycode = KC_TILD,
                                                    .sibling = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_E,
                                                        .sibling = &(struct ComposeTrie)
                                                            {
                                                            .keycode = KC_I,
                                                            .sibling = &(struct ComposeTrie)
                                                                {
                                                                .keycode = KC_D,
                                                                .sibling = &(struct ComposeTrie)
                                                                    {
                                                                    .keycode = KC_B,
                                                                    .sibling = &(struct ComposeTrie)
                                                                        {
                                                                        .keycode = KC_G,
                                                                        .sibling = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_F,
                                                                            .sibling = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_H,
                                                                                .sibling = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_Y,
                                                                                    .child = &(struct ComposeTrie)
                                                                                        {
                                                                                        .keycode = KC_U,
                                                                                        .child = &(struct ComposeTrie)
                                                                                            {
                                                                                            .keycode = KC_N,
                                                                                            .child = &(struct ComposeTrie)
                                                                                                {
                                                                                                .keycode = KC_O,
                                                                                                .output = "ლ(ಠ益ಠლ)",
                                                                                                }
                                                                                            ,
                                                                                            }
                                                                                        ,
                                                                                        }
                                                                                    ,
                                                                                    }
                                                                                ,
                                                                                .child = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_A,
                                                                                    .child = &(struct ComposeTrie)
                                                                                        {
                                                                                        .keycode = KC_P,
                                                                                        .child = &(struct ComposeTrie)
                                                                                            {
                                                                                            .keycode = KC_P,
                                                                                            .child = &(struct ComposeTrie)
                                                                                                {
                                                                                                .keycode = KC_Y,
                                                                                                .output = "ᕕ( ᐛ )ᕗ",
                                                                                                }
                                                                                            ,
                                                                                            }
                                                                                        ,
                                                                                        }
                                                                                    ,
                                                                                    }
                                                                                ,
                                                                                }
                                                                            ,
                                                                            .child = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_L,
                                                                                .child = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_I,
                                                                                    .child = &(struct ComposeTrie)
                                                                                        {
                                                                                        .keycode = KC_P,
                                                                                        .output = "╯°□°)╯︵ ┻━┻",
                                                                                        }
                                                                                    ,
                                                                                    }
                                                                                ,
                                                                                }
                                                                            ,
                                                                            }
                                                                        ,
                                                                        .child = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_A,
                                                                            .output = "α",
                                                                            .sibling = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_B,
                                                                                .output = "β",
                                                                                .sibling = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_G,
                                                                                    .output = "γ",
                                                                                    .sibling = &(struct ComposeTrie)
                                                                                        {
                                                                                        .keycode = KC_LSFT,
                                                                                        .sibling = &(struct ComposeTrie)
                                                                                            {
                                                                                            .keycode = KC_D,
                                                                                            .output = "δ",
                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                {
                                                                                                .keycode = KC_E,
                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                    {
                                                                                                    .keycode = KC_Z,
                                                                                                    .output = "ζ",
                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                        {
                                                                                                        .keycode = KC_T,
                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                            {
                                                                                                            .keycode = KC_I,
                                                                                                            .output = "ι",
                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                {
                                                                                                                .keycode = KC_K,
                                                                                                                .output = "κ",
                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                    {
                                                                                                                    .keycode = KC_L,
                                                                                                                    .output = "λ",
                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                        {
                                                                                                                        .keycode = KC_M,
                                                                                                                        .output = "μ",
                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                            {
                                                                                                                            .keycode = KC_N,
                                                                                                                            .output = "ν",
                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                {
                                                                                                                                .keycode = KC_X,
                                                                                                                                .output = "ξ",
                                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                                    {
                                                                                                                                    .keycode = KC_P,
                                                                                                                                    .output = "π",
                                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                                        {
                                                                                                                                        .keycode = KC_R,
                                                                                                                                        .output = "ρ",
                                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                                            {
                                                                                                                                            .keycode = KC_S,
                                                                                                                                            .output = "σ",
                                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                                {
                                                                                                                                                .keycode = KC_U,
                                                                                                                                                .output = "ψ",
                                                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                                                    {
                                                                                                                                                    .keycode = KC_F,
                                                                                                                                                    .output = "φ",
                                                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                                                        {
                                                                                                                                                        .keycode = KC_C,
                                                                                                                                                        .output = "χ",
                                                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                                                            {
                                                                                                                                                            .keycode = KC_O,
                                                                                                                                                            .output = "ω",
                                                                                                                                                            }
                                                                                                                                                        ,
                                                                                                                                                        }
                                                                                                                                                    ,
                                                                                                                                                    }
                                                                                                                                                ,
                                                                                                                                                }
                                                                                                                                            ,
                                                                                                                                            }
                                                                                                                                        ,
                                                                                                                                        }
                                                                                                                                    ,
                                                                                                                                    }
                                                                                                                                ,
                                                                                                                                }
                                                                                                                            ,
                                                                                                                            }
                                                                                                                        ,
                                                                                                                        }
                                                                                                                    ,
                                                                                                                    }
                                                                                                                ,
                                                                                                                }
                                                                                                            ,
                                                                                                            }
                                                                                                        ,
                                                                                                        .child = &(struct ComposeTrie)
                                                                                                            {
                                                                                                            .keycode = KC_H,
                                                                                                            .output = "θ",
                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                {
                                                                                                                .keycode = KC_A,
                                                                                                                .output = "τ",
                                                                                                                }
                                                                                                            ,
                                                                                                            }
                                                                                                        ,
                                                                                                        }
                                                                                                    ,
                                                                                                    }
                                                                                                ,
                                                                                                .child = &(struct ComposeTrie)
                                                                                                    {
                                                                                                    .keycode = KC_P,
                                                                                                    .output = "ε",
                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                        {
                                                                                                        .keycode = KC_T,
                                                                                                        .output = "η",
                                                                                                        }
                                                                                                    ,
                                                                                                    }
                                                                                                ,
                                                                                                }
                                                                                            ,
                                                                                            }
                                                                                        ,
                                                                                        .child = &(struct ComposeTrie)
                                                                                            {
                                                                                            .keycode = KC_G,
                                                                                            .output = "Γ",
                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                {
                                                                                                .keycode = KC_D,
                                                                                                .output = "Δ",
                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                    {
                                                                                                    .keycode = KC_T,
                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                        {
                                                                                                        .keycode = KC_L,
                                                                                                        .output = "Λ",
                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                            {
                                                                                                            .keycode = KC_X,
                                                                                                            .output = "Ξ",
                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                {
                                                                                                                .keycode = KC_P,
                                                                                                                .output = "Π",
                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                    {
                                                                                                                    .keycode = KC_S,
                                                                                                                    .output = "Σ",
                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                        {
                                                                                                                        .keycode = KC_U,
                                                                                                                        .output = "Ψ",
                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                            {
                                                                                                                            .keycode = KC_F,
                                                                                                                            .output = "Φ",
                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                {
                                                                                                                                .keycode = KC_O,
                                                                                                                                .output = "Ω",
                                                                                                                                }
                                                                                                                            ,
                                                                                                                            }
                                                                                                                        ,
                                                                                                                        }
                                                                                                                    ,
                                                                                                                    }
                                                                                                                ,
                                                                                                                }
                                                                                                            ,
                                                                                                            }
                                                                                                        ,
                                                                                                        }
                                                                                                    ,
                                                                                                    .child = &(struct ComposeTrie)
                                                                                                        {
                                                                                                        .keycode = KC_H,
                                                                                                        .output = "Θ",
                                                                                                        }
                                                                                                    ,
                                                                                                    }
                                                                                                ,
                                                                                                }
                                                                                            ,
                                                                                            }
                                                                                        ,
                                                                                        }
                                                                                    ,
                                                                                    }
                                                                                ,
                                                                                }
                                                                            ,
                                                                            }
                                                                        ,
                                                                        }
                                                                    ,
                                                                    .child = &(struct ComposeTrie)
                                                                        {
                                                                        .keycode = KC_B,
                                                                        .child = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_A,
                                                                            .output = "𝔸",
                                                                            .sibling = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_B,
                                                                                .output = "𝔹",
                                                                                .sibling = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_C,
                                                                                    .output = "ℂ",
                                                                                    .sibling = &(struct ComposeTrie)
                                                                                        {
                                                                                        .keycode = KC_D,
                                                                                        .output = "𝔻",
                                                                                        .sibling = &(struct ComposeTrie)
                                                                                            {
                                                                                            .keycode = KC_E,
                                                                                            .output = "𝔼",
                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                {
                                                                                                .keycode = KC_F,
                                                                                                .output = "𝔽",
                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                    {
                                                                                                    .keycode = KC_G,
                                                                                                    .output = "𝔾",
                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                        {
                                                                                                        .keycode = KC_H,
                                                                                                        .output = "ℍ",
                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                            {
                                                                                                            .keycode = KC_I,
                                                                                                            .output = "𝕀",
                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                {
                                                                                                                .keycode = KC_J,
                                                                                                                .output = "𝕁",
                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                    {
                                                                                                                    .keycode = KC_K,
                                                                                                                    .output = "𝕂",
                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                        {
                                                                                                                        .keycode = KC_L,
                                                                                                                        .output = "𝕃",
                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                            {
                                                                                                                            .keycode = KC_M,
                                                                                                                            .output = "𝕄",
                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                {
                                                                                                                                .keycode = KC_N,
                                                                                                                                .output = "ℕ",
                                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                                    {
                                                                                                                                    .keycode = KC_O,
                                                                                                                                    .output = "𝕆",
                                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                                        {
                                                                                                                                        .keycode = KC_P,
                                                                                                                                        .output = "ℙ",
                                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                                            {
                                                                                                                                            .keycode = KC_Q,
                                                                                                                                            .output = "ℚ",
                                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                                {
                                                                                                                                                .keycode = KC_R,
                                                                                                                                                .output = "ℝ",
                                                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                                                    {
                                                                                                                                                    .keycode = KC_S,
                                                                                                                                                    .output = "𝕊",
                                                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                                                        {
                                                                                                                                                        .keycode = KC_T,
                                                                                                                                                        .output = "𝕋",
                                                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                                                            {
                                                                                                                                                            .keycode = KC_U,
                                                                                                                                                            .output = "𝕌",
                                                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                                                {
                                                                                                                                                                .keycode = KC_V,
                                                                                                                                                                .output = "𝕍",
                                                                                                                                                                .sibling = &(struct ComposeTrie)
                                                                                                                                                                    {
                                                                                                                                                                    .keycode = KC_W,
                                                                                                                                                                    .output = "𝕎",
                                                                                                                                                                    .sibling = &(struct ComposeTrie)
                                                                                                                                                                        {
                                                                                                                                                                        .keycode = KC_X,
                                                                                                                                                                        .output = "𝕏",
                                                                                                                                                                        .sibling = &(struct ComposeTrie)
                                                                                                                                                                            {
                                                                                                                                                                            .keycode = KC_Y,
                                                                                                                                                                            .output = "𝕐",
                                                                                                                                                                            .sibling = &(struct ComposeTrie)
                                                                                                                                                                                {
                                                                                                                                                                                .keycode = KC_Z,
                                                                                                                                                                                .output = "ℤ",
                                                                                                                                                                                }
                                                                                                                                                                            ,
                                                                                                                                                                            }
                                                                                                                                                                        ,
                                                                                                                                                                        }
                                                                                                                                                                    ,
                                                                                                                                                                    }
                                                                                                                                                                ,
                                                                                                                                                                }
                                                                                                                                                            ,
                                                                                                                                                            }
                                                                                                                                                        ,
                                                                                                                                                        }
                                                                                                                                                    ,
                                                                                                                                                    }
                                                                                                                                                ,
                                                                                                                                                }
                                                                                                                                            ,
                                                                                                                                            }
                                                                                                                                        ,
                                                                                                                                        }
                                                                                                                                    ,
                                                                                                                                    }
                                                                                                                                ,
                                                                                                                                }
                                                                                                                            ,
                                                                                                                            }
                                                                                                                        ,
                                                                                                                        }
                                                                                                                    ,
                                                                                                                    }
                                                                                                                ,
                                                                                                                }
                                                                                                            ,
                                                                                                            }
                                                                                                        ,
                                                                                                        }
                                                                                                    ,
                                                                                                    }
                                                                                                ,
                                                                                                }
                                                                                            ,
                                                                                            }
                                                                                        ,
                                                                                        }
                                                                                    ,
                                                                                    }
                                                                                ,
                                                                                }
                                                                            ,
                                                                            }
                                                                        ,
                                                                        }
                                                                    ,
                                                                    }
                                                                ,
                                                                .child = &(struct ComposeTrie)
                                                                    {
                                                                    .keycode = KC_E,
                                                                    .child = &(struct ComposeTrie)
                                                                        {
                                                                        .keycode = KC_G,
                                                                        .child = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_C,
                                                                            .output = "℃",
                                                                            .sibling = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_F,
                                                                                .output = "℉",
                                                                                }
                                                                            ,
                                                                            }
                                                                        ,
                                                                        }
                                                                    ,
                                                                    }
                                                                ,
                                                                }
                                                            ,
                                                            .child = &(struct ComposeTrie)
                                                                {
                                                                .keycode = KC_N,
                                                                .sibling = &(struct ComposeTrie)
                                                                    {
                                                                    .keycode = KC_I,
                                                                    .child = &(struct ComposeTrie)
                                                                        {
                                                                        .keycode = KC_N,
                                                                        .sibling = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_I,
                                                                            .child = &(struct ComposeTrie)
                                                                                {
                                                                                .keycode = KC_N,
                                                                                .child = &(struct ComposeTrie)
                                                                                    {
                                                                                    .keycode = KC_T,
                                                                                    .output = "∭",
                                                                                    }
                                                                                ,
                                                                                }
                                                                            ,
                                                                            }
                                                                        ,
                                                                        .child = &(struct ComposeTrie)
                                                                            {
                                                                            .keycode = KC_T,
                                                                            .output = "∬",
                                                                            }
                                                                        ,
                                                                        }
                                                                    ,
                                                                    }
                                                                ,
                                                                .child = &(struct ComposeTrie)
                                                                    {
                                                                    .keycode = KC_T,
                                                                    .output = "∫",
                                                                    }
                                                                ,
                                                                }
                                                            ,
                                                            }
                                                        ,
                                                        .child = &(struct ComposeTrie)
                                                            {
                                                            .keycode = KC_E,
                                                            .output = "∈",
                                                            }
                                                        ,
                                                        }
                                                    ,
                                                    .child = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_EQL,
                                                        .output = "≅",
                                                        }
                                                    ,
                                                    }
                                                ,
                                                .child = &(struct ComposeTrie)
                                                    {
                                                    .keycode = KC_EQL,
                                                    .output = "≠",
                                                    .sibling = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_E,
                                                        .child = &(struct ComposeTrie)
                                                            {
                                                            .keycode = KC_E,
                                                            .output = "∉",
                                                            }
                                                        ,
                                                        }
                                                    ,
                                                    }
                                                ,
                                                }
                                            ,
                                            .child = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_X,
                                                .output = "×",
                                                }
                                            ,
                                            }
                                        ,
                                        .child = &(struct ComposeTrie)
                                            {
                                            .keycode = KC_H,
                                            .output = "Þ",
                                            }
                                        ,
                                        }
                                    ,
                                    .child = &(struct ComposeTrie)
                                        {
                                        .keycode = KC_P,
                                        .output = "¶",
                                        }
                                    ,
                                    }
                                ,
                                .child = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_S,
                                    .output = "ß",
                                    .sibling = &(struct ComposeTrie)
                                        {
                                        .keycode = KC_O,
                                        .output = "§",
                                        .sibling = &(struct ComposeTrie)
                                            {
                                            .keycode = KC_Q,
                                            .output = "√",
                                            .sibling = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_U,
                                                .sibling = &(struct ComposeTrie)
                                                    {
                                                    .keycode = KC_H,
                                                    .child = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_R,
                                                        .child = &(struct ComposeTrie)
                                                            {
                                                            .keycode = KC_U,
                                                            .child = &(struct ComposeTrie)
                                                                {
                                                                .keycode = KC_G,
                                                                .output = "¯\\_(ツ)_/¯",
                                                                }
                                                            ,
                                                            }
                                                        ,
                                                        }
                                                    ,
                                                    }
                                                ,
                                                .child = &(struct ComposeTrie)
                                                    {
                                                    .keycode = KC_M,
                                                    .output = "∑",
                                                    }
                                                ,
                                                }
                                            ,
                                            }
                                        ,
                                        }
                                    ,
                                    }
                                ,
                                }
                            ,
                            .child = &(struct ComposeTrie)
                                {
                                .keycode = KC_MINS,
                                .output = "£",
                                }
                            ,
                            }
                        ,
                        .child = &(struct ComposeTrie)
                            {
                            .keycode = KC_EQL,
                            .output = "€",
                            .sibling = &(struct ComposeTrie)
                                {
                                .keycode = KC_SLSH,
                                .output = "¢",
                                .sibling = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_COMM,
                                    .output = "ç",
                                    }
                                ,
                                }
                            ,
                            }
                        ,
                        }
                    ,
                    .child = &(struct ComposeTrie)
                        {
                        .keycode = KC_E,
                        .output = "æ",
                        .sibling = &(struct ComposeTrie)
                            {
                            .keycode = KC_L,
                            .child = &(struct ComposeTrie)
                                {
                                .keycode = KC_E,
                                .child = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_F,
                                    .child = &(struct ComposeTrie)
                                        {
                                        .keycode = KC_DOT,
                                        .output = "ℵ",
                                        .sibling = &(struct ComposeTrie)
                                            {
                                            .keycode = KC_P0,
                                            .output = "ℵ₀",
                                            .sibling = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_P1,
                                                .output = "ℵ₁",
                                                }
                                            ,
                                            }
                                        ,
                                        }
                                    ,
                                    }
                                ,
                                }
                            ,
                            }
                        ,
                        }
                    ,
                    }
                ,
                .child = &(struct ComposeTrie)
                    {
                    .keycode = KC_MINS,
                    .output = "±",
                    }
                ,
                }
            ,
            .child = &(struct ComposeTrie)
                {
                .keycode = KC_SLSH,
                .sibling = &(struct ComposeTrie)
                    {
                    .keycode = KC_O,
                    .sibling = &(struct ComposeTrie)
                        {
                        .keycode = KC_A,
                        .sibling = &(struct ComposeTrie)
                            {
                            .keycode = KC_S,
                            .sibling = &(struct ComposeTrie)
                                {
                                .keycode = KC_SCLN,
                                .child = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_MINS,
                                    .output = "÷",
                                    }
                                ,
                                }
                            ,
                            .child = &(struct ComposeTrie)
                                {
                                .keycode = KC_S,
                                .output = "ẞ",
                                }
                            ,
                            }
                        ,
                        .child = &(struct ComposeTrie)
                            {
                            .keycode = KC_E,
                            .output = "Æ",
                            }
                        ,
                        }
                    ,
                    .child = &(struct ComposeTrie)
                        {
                        .keycode = KC_E,
                        .output = "Œ",
                        }
                    ,
                    }
                ,
                .child = &(struct ComposeTrie)
                    {
                    .keycode = KC_SLSH,
                    .output = "¿",
                    }
                ,
                }
            ,
            }
        ,
        .child = &(struct ComposeTrie)
            {
            .keycode = KC_DOT,
            .output = "…",
            }
        ,
        }
    ,
    .child = &(struct ComposeTrie)
        {
        .keycode = KC_C,
        .output = "©",
        .sibling = &(struct ComposeTrie)
            {
            .keycode = KC_R,
            .output = "®",
            .sibling = &(struct ComposeTrie)
                {
                .keycode = KC_E,
                .output = "œ",
                .sibling = &(struct ComposeTrie)
                    {
                    .keycode = KC_O,
                    .output = "∞",
                    .sibling = &(struct ComposeTrie)
                        {
                        .keycode = KC_PLUS,
                        .output = "⊕",
                        .sibling = &(struct ComposeTrie)
                            {
                            .keycode = KC_MINS,
                            .output = "⊖",
                            .sibling = &(struct ComposeTrie)
                                {
                                .keycode = KC_X,
                                .output = "⊗",
                                .sibling = &(struct ComposeTrie)
                                    {
                                    .keycode = KC_SLSH,
                                    .output = "⊘",
                                    .sibling = &(struct ComposeTrie)
                                        {
                                        .keycode = KC_I,
                                        .child = &(struct ComposeTrie)
                                            {
                                            .keycode = KC_N,
                                            .sibling = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_I,
                                                .child = &(struct ComposeTrie)
                                                    {
                                                    .keycode = KC_N,
                                                    .sibling = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_I,
                                                        .child = &(struct ComposeTrie)
                                                            {
                                                            .keycode = KC_N,
                                                            .child = &(struct ComposeTrie)
                                                                {
                                                                .keycode = KC_T,
                                                                .output = "∰",
                                                                }
                                                            ,
                                                            }
                                                        ,
                                                        }
                                                    ,
                                                    .child = &(struct ComposeTrie)
                                                        {
                                                        .keycode = KC_T,
                                                        .output = "∯",
                                                        }
                                                    ,
                                                    }
                                                ,
                                                }
                                            ,
                                            .child = &(struct ComposeTrie)
                                                {
                                                .keycode = KC_T,
                                                .output = "∮",
                                                }
                                            ,
                                            }
                                        ,
                                        }
                                    ,
                                    }
                                ,
                                }
                            ,
                            }
                        ,
                        }
                    ,
                    }
                ,
                }
            ,
            }
        ,
        }
    ,
    }
,
.child = &(struct ComposeTrie)
    {
    .keycode = KC_MINS,
    .child = &(struct ComposeTrie)
        {
        .keycode = KC_DOT,
        .output = "–",
        .sibling = &(struct ComposeTrie)
            {
            .keycode = KC_MINS,
            .output = "—",
            }
        ,
        }
    ,
    }
,
}
;