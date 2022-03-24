/* Copyright 2022 Daniel Sundberg
 * Merge of swedish layouts from QMK
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_SECT GRAVE  // §
#define SE_1    N1    // 1
#define SE_2    N2    // 2
#define SE_3    N3    // 3
#define SE_4    N4    // 4
#define SE_5    N5    // 5
#define SE_6    N6    // 6
#define SE_7    N7    // 7
#define SE_8    N8    // 8
#define SE_9    N9    // 9
#define SE_0    N0    // 0
#define SE_PLUS MINUS // +
#define SE_ACUT EQUAL  // ´ (dead)
// Row 2
#define SE_Q    Q    // Q
#define SE_W    W    // W
#define SE_E    E    // E
#define SE_R    R    // R
#define SE_T    T    // T
#define SE_Y    Y    // Y
#define SE_U    U    // U
#define SE_I    I    // I
#define SE_O    O    // O
#define SE_P    P    // P
#define SE_ARNG LEFT_BRACKET // Å
#define SE_DIAE RIGHT_BRACKET // ¨ (dead)
// Row 3
#define SE_A    A    // A
#define SE_S    S    // S
#define SE_D    D    // D
#define SE_F    F    // F
#define SE_G    G    // G
#define SE_H    H    // H
#define SE_J    J    // J
#define SE_K    K    // K
#define SE_L    L    // L
#define SE_ODIA SEMICOLON // Ö
#define SE_ADIA SINGLE_QUOTE // Ä
#define SE_QUOT NON_US_HASH // '
// Row 4
#define SE_LABK NON_US_BACKSLASH // <
#define SE_Z    Z    // Z
#define SE_X    X    // X
#define SE_C    C    // C
#define SE_V    V    // V
#define SE_B    B    // B
#define SE_N    N    // N
#define SE_M    M    // M
#define SE_COMM COMMA // ,
#define SE_DOT  PERIOD  // .
#define SE_MINS SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define SE_HALF LS(SE_SECT) // ½
#define SE_EXLM LS(SE_1)    // !
#define SE_DQUO LS(SE_2)    // "
#define SE_HASH LS(SE_3)    // #
#define SE_CURR LS(SE_4)    // ¤
#define SE_PERC LS(SE_5)    // %
#define SE_AMPR LS(SE_6)    // &
#define SE_SLSH LS(SE_7)    // /
#define SE_LPRN LS(SE_8)    // (
#define SE_RPRN LS(SE_9)    // )
#define SE_EQL  LS(SE_0)    // =
#define SE_QUES LS(SE_PLUS) // ?
#define SE_GRV  LS(SE_ACUT) // ` (dead)
// Row 2
#define SE_CIRC LS(SE_DIAE) // ^ (dead)
// Row 3
#define SE_ASTR LS(SE_QUOT) // *
// Row 4
#define SE_RABK LS(SE_LABK) // >
#define SE_SCLN LS(SE_COMM) // ;
#define SE_COLN LS(SE_DOT)  // :
#define SE_UNDS LS(SE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
 #define ALGR(X) LA(LC(X))
// Row 1
#define SE_AT   ALGR(SE_2)    // @
#define SE_PND  ALGR(SE_3)    // £
#define SE_DLR  ALGR(SE_4)    // $
#define SE_EURO ALGR(SE_5)    // €
#define SE_LCBR ALGR(SE_7)    // {
#define SE_LBRC ALGR(SE_8)    // [
#define SE_RBRC ALGR(SE_9)    // ]
#define SE_RCBR ALGR(SE_0)    // }
#define SE_BSLS ALGR(SE_PLUS) // (backslash)
// Row 2
#define SE_TILD ALGR(SE_DIAE) // ~ (dead)
// Row 4
#define SE_PIPE ALGR(SE_LABK) // |
#define SE_MICR ALGR(SE_M)    // µ

/* Extra keys from MAC for ISO layout
 *
 *
 */

/* Shifted symbols
*/
#define SE_DEG LS(SE_SECT)  // °
#define SE_EURO_MAC LS(SE_4)    // €

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ¶ │ © │ ™ │ £ │ $ │ ∞ │   │ | │ [ │ ] │ ≈ │ ± │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ • │ Ω │ É │ ® │ † │ µ │ Ü │ ı │ Œ │ π │ ˙ │ ~ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │  │ ß │ ∂ │ ƒ │ ¸ │ ˛ │ √ │ ª │ ﬁ │ Ø │ Æ │ @ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ÷ │   │ Ç │ ‹ │ › │ ‘ │ ’ │ ‚ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SE_PILC LA(SE_SECT) // ¶
#define SE_COPY LA(SE_1)    // ©
#define SE_TM   LA(SE_2)    // ™
#define SE_PND_MAC  LA(SE_3)    // £
#define SE_DLR_MAC  LA(SE_4)    // $
#define SE_INFN LA(SE_5)    // ∞
#define SE_PIPE_MAC LA(SE_7)    // |
#define SE_LBRC_MAC LA(SE_8)    // [
#define SE_RBRC_MAC LA(SE_9)    // ]
#define SE_AEQL LA(SE_0)    // ≈
#define SE_PLMN LA(SE_PLUS) // ±
// Row 2
#define SE_BULT LA(SE_Q)    // •
#define SE_OMEG LA(SE_W)    // Ω
#define SE_EACU LA(SE_E)    // É
#define SE_REGD LA(SE_R)    // ®
#define SE_DAGG LA(SE_T)    // †
#define SE_MICR_MAC LA(SE_Y)    // µ
#define SE_UDIA LA(SE_U)    // Ü
#define SE_DLSI LA(SE_I)    // ı
#define SE_OE   LA(SE_O)    // Œ
#define SE_PI   LA(SE_P)    // π
#define SE_DOTA LA(SE_ARNG) // ˙
#define SE_TILD_MAC LA(SE_DIAE) // ~ (dead)
// Row 3
#define SE_APPL LA(SE_A)    //  (Apple logo)
#define SE_SS   LA(SE_S)    // ß
#define SE_PDIF LA(SE_D)    // ∂
#define SE_FHK  LA(SE_F)    // ƒ
#define SE_CEDL LA(SE_G)    // ¸
#define SE_OGON LA(SE_H)    // ˛
#define SE_SQRT LA(SE_J)    // √
#define SE_FORD LA(SE_K)    // ª
#define SE_FI   LA(SE_L)    // ﬁ
#define SE_OSTR LA(SE_ODIA) // Ø
#define SE_AE   LA(SE_ADIA) // Æ
#define SE_AT_MAC   LA(SE_QUOT) // @
// Row 4
#define SE_LTEQ LA(SE_LABK) // ≤
#define SE_DIV  LA(SE_Z)    // ÷
#define SE_CCED LA(SE_C)    // Ç
#define SE_LSAQ LA(SE_V)    // ‹
#define SE_RSAQ LA(SE_B)    // ›
#define SE_LSQU LA(SE_N)    // ‘
#define SE_RSQU LA(SE_M)    // ’
#define SE_SLQU LA(SE_COMM) // ‚
#define SE_ELLP LA(SE_DOT)  // …
#define SE_NDSH LA(SE_MINS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¡ │ ” │ ¥ │ ¢ │ ‰ │   │ \ │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │ ˝ │   │   │ ‡ │ ˜ │   │ ˆ │   │ ∏ │ ˚ │   │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ ◊ │ ∑ │ ∆ │ ∫ │ ¯ │ ˘ │ ¬ │ º │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ⁄ │ ˇ │   │ « │ » │ “ │ ” │ „ │ · │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define SE_IEXL LS(LA(SE_1))    // ¡
#define SE_YEN  LS(LA(SE_3))    // ¥
#define SE_CENT LS(LA(SE_4))    // ¢
#define SE_PERM LS(LA(SE_5))    // ‰
#define SE_BSLS_MAC LS(LA(SE_7))    // (backslash)
#define SE_LCBR_MAC LS(LA(SE_8))    // {
#define SE_RCBR_MAC LS(LA(SE_9))    // }
#define SE_NEQL LS(LA(SE_0))    // ≠
#define SE_IQUE LS(LA(SE_PLUS)) // ¿
// Row 2
#define SE_DACU LS(LA(SE_W))    // ˝
#define SE_DDAG LS(LA(SE_T))    // ‡
#define SE_STIL LS(LA(SE_Y))    // ˜
#define SE_DCIR LS(LA(SE_I))    // ˆ
#define SE_NARP LS(LA(SE_P))    // ∏
#define SE_RNGA LS(LA(SE_ARNG)) // ˚
// Row 3
#define SE_LOZN LS(LA(SE_A))    // ◊
#define SE_NARS LS(LA(SE_S))    // ∑
#define SE_INCR LS(LA(SE_D))    // ∆
#define SE_INTG LS(LA(SE_F))    // ∫
#define SE_MACR LS(LA(SE_G))    // ¯
#define SE_BREV LS(LA(SE_H))    // ˘
#define SE_NOT  LS(LA(SE_J))    // ¬
#define SE_MORD LS(LA(SE_K))    // º
#define SE_FL   LS(LA(SE_L))    // ﬂ
// Row 4
#define SE_GTEQ LS(LA(SE_LABK)) // ≥
#define SE_FRSL LS(LA(SE_Z))    // ⁄
#define SE_CARN LS(LA(SE_X))    // ˇ
#define SE_LDAQ LS(LA(SE_V))    // «
#define SE_RDAQ LS(LA(SE_B))    // »
#define SE_LDQU LS(LA(SE_N))    // “
#define SE_RDQU LS(LA(SE_M))    // ”
#define SE_DLQU LS(LA(SE_COMM)) // „
#define SE_MDDT LS(LA(SE_DOT))  // ·
#define SE_MDSH LS(LA(SE_MINS)) // —
