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
#define S(X) LS(X)
#define A(X) LA(X)
// Row 1
#define SE_HALF S(SE_SECT) // ½
#define SE_EXLM S(SE_1)    // !
#define SE_DQUO S(SE_2)    // "
#define SE_HASH S(SE_3)    // #
#define SE_CURR S(SE_4)    // ¤
#define SE_PERC S(SE_5)    // %
#define SE_AMPR S(SE_6)    // &
#define SE_SLSH S(SE_7)    // /
#define SE_LPRN S(SE_8)    // (
#define SE_RPRN S(SE_9)    // )
#define SE_EQL  S(SE_0)    // =
#define SE_QUES S(SE_PLUS) // ?
#define SE_GRV  S(SE_ACUT) // ` (dead)
// Row 2
#define SE_CIRC S(SE_DIAE) // ^ (dead)
// Row 3
#define SE_ASTR S(SE_QUOT) // *
// Row 4
#define SE_RABK S(SE_LABK) // >
#define SE_SCLN S(SE_COMM) // ;
#define SE_COLN S(SE_DOT)  // :
#define SE_UNDS S(SE_MINS) // _

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
#define _MAC ALGR(SE_PLUS) // (backslash)
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
#define SE_DEG S(SE_SECT)  // °
#define SE_EURO S(SE_4)    // €

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
#define SE_PILC A(SE_SECT) // ¶
#define SE_COPY A(SE_1)    // ©
#define SE_TM   A(SE_2)    // ™
#define SE_PND_MAC  A(SE_3)    // £
#define SE_DLR_MAC  A(SE_4)    // $
#define SE_INFN A(SE_5)    // ∞
#define SE_PIPE_MAC A(SE_7)    // |
#define SE_LBRC_MAC A(SE_8)    // [
#define SE_RBRC_MAC A(SE_9)    // ]
#define SE_AEQL A(SE_0)    // ≈
#define SE_PLMN A(SE_PLUS) // ±
// Row 2
#define SE_BULT A(SE_Q)    // •
#define SE_OMEG A(SE_W)    // Ω
#define SE_EACU A(SE_E)    // É
#define SE_REGD A(SE_R)    // ®
#define SE_DAGG A(SE_T)    // †
#define SE_MICR_MAC A(SE_Y)    // µ
#define SE_UDIA A(SE_U)    // Ü
#define SE_DLSI A(SE_I)    // ı
#define SE_OE   A(SE_O)    // Œ
#define SE_PI   A(SE_P)    // π
#define SE_DOTA A(SE_ARNG) // ˙
#define SE_TILD_MAC A(SE_DIAE) // ~ (dead)
// Row 3
#define SE_APPL A(SE_A)    //  (Apple logo)
#define SE_SS   A(SE_S)    // ß
#define SE_PDIF A(SE_D)    // ∂
#define SE_FHK  A(SE_F)    // ƒ
#define SE_CEDL A(SE_G)    // ¸
#define SE_OGON A(SE_H)    // ˛
#define SE_SQRT A(SE_J)    // √
#define SE_FORD A(SE_K)    // ª
#define SE_FI   A(SE_L)    // ﬁ
#define SE_OSTR A(SE_ODIA) // Ø
#define SE_AE   A(SE_ADIA) // Æ
#define SE_AT_MAC   A(SE_QUOT) // @
// Row 4
#define SE_LTEQ A(SE_LABK) // ≤
#define SE_DIV  A(SE_Z)    // ÷
#define SE_CCED A(SE_C)    // Ç
#define SE_LSAQ A(SE_V)    // ‹
#define SE_RSAQ A(SE_B)    // ›
#define SE_LSQU A(SE_N)    // ‘
#define SE_RSQU A(SE_M)    // ’
#define SE_SLQU A(SE_COMM) // ‚
#define SE_ELLP A(SE_DOT)  // …
#define SE_NDSH A(SE_MINS) // –

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
#define SE_IEXL S(A(SE_1))    // ¡
#define SE_YEN  S(A(SE_3))    // ¥
#define SE_CENT S(A(SE_4))    // ¢
#define SE_PERM S(A(SE_5))    // ‰
#define SE_BSLS_MAC S(A(SE_7))    // (backslash)
#define SE_LCBR_MAC S(A(SE_8))    // {
#define SE_RCBR_MAC S(A(SE_9))    // }
#define SE_NEQL S(A(SE_0))    // ≠
#define SE_IQUE S(A(SE_PLUS)) // ¿
// Row 2
#define SE_DACU S(A(SE_W))    // ˝
#define SE_DDAG S(A(SE_T))    // ‡
#define SE_STIL S(A(SE_Y))    // ˜
#define SE_DCIR S(A(SE_I))    // ˆ
#define SE_NARP S(A(SE_P))    // ∏
#define SE_RNGA S(A(SE_ARNG)) // ˚
// Row 3
#define SE_LOZN S(A(SE_A))    // ◊
#define SE_NARS S(A(SE_S))    // ∑
#define SE_INCR S(A(SE_D))    // ∆
#define SE_INTG S(A(SE_F))    // ∫
#define SE_MACR S(A(SE_G))    // ¯
#define SE_BREV S(A(SE_H))    // ˘
#define SE_NOT  S(A(SE_J))    // ¬
#define SE_MORD S(A(SE_K))    // º
#define SE_FL   S(A(SE_L))    // ﬂ
// Row 4
#define SE_GTEQ S(A(SE_LABK)) // ≥
#define SE_FRSL S(A(SE_Z))    // ⁄
#define SE_CARN S(A(SE_X))    // ˇ
#define SE_LDAQ S(A(SE_V))    // «
#define SE_RDAQ S(A(SE_B))    // »
#define SE_LDQU S(A(SE_N))    // “
#define SE_RDQU S(A(SE_M))    // ”
#define SE_DLQU S(A(SE_COMM)) // „
#define SE_MDDT S(A(SE_DOT))  // ·
#define SE_MDSH S(A(SE_MINS)) // —
