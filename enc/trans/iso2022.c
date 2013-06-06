/* autogenerated. */
/* src="transcode-tblgen.rb", len=28460, checksum=51276 */
/* src="iso2022.trans", len=15902, checksum=37507 */

#include "transcoder.h"



static const unsigned char
iso2022_byte_array[1245] = {
#define iso2022jp_decoder_1B_24_offsets 0
64, 66,
      1,  0,  1,

#define iso2022jp_decoder_1B_28_offsets 5
66, 74,
      1,  0,  0,  0,  0,  0,  0,  0,    1,

#define iso2022jp_decoder_1B_offsets 16
36, 40,
      1,  0,  0,  0,  2,

#define iso2022jp_decoder_offsets 23
0, 127,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  1,  1,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  2,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,

#define iso2022jp_decoder_jisx0208_rest_offsets 153
33, 126,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,

#define iso2022jp_encoder_90_A1toFE_offsets 249
161, 254,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,

#define iso2022jp_encoder_offsets 345
0, 146,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  1,  1,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  1,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      1,  1,  1,  1,  1,  1,  1,  1,    1,  1,  1,  1,  1,  1,  1,  1,
      2,  1,  2,

#define eucjp_to_stateless_iso2022jp_offsets 494
0, 254,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  1,  1,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  1,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      2,  2,  2,  2,  2,  2,  2,  2,    2,  2,  2,  2,  2,  2,  3,  4,
      2,  2,  2,  2,  2,  2,  2,  2,    2,  2,  2,  2,  2,  2,  2,  2,
      2,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,  5,
      5,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,  5,
      5,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,  5,
      5,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,  5,
      5,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,  5,
      5,  5,  5,  5,  5,  5,  5,  5,    5,  5,  5,  5,  5,  5,  5,

#define cp50221_decoder_1B_28_offsets 751
66, 74,
      1,  0,  0,  0,  0,  0,  0,  1,    1,

#define cp50221_decoder_offsets 762
0, 223,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  1,  1,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  2,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,

#define cp50221_encoder_offsets 988
0, 254,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  1,  1,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  1,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,    0,  0,  0,  0,  0,  0,  0,  0,
      2,  2,  2,  2,  2,  2,  2,  2,    2,  2,  2,  2,  2,  2,  3,  2,
      2,  2,  2,  2,  2,  2,  2,  2,    2,  2,  2,  2,  2,  2,  2,  2,
      2,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,  3,
      3,  3,  3,  3,  3,  3,  3,  3,    3,  3,  3,  3,  3,  3,  3,

};
static const unsigned int
iso2022_word_array[69] = {
#define iso2022jp_decoder_1B_24_infos WORDINDEX2INFO(0)
     INVALID,   FUNso,

#define iso2022jp_decoder_1B_24 WORDINDEX2INFO(2)
    iso2022jp_decoder_1B_24_offsets,
    iso2022jp_decoder_1B_24_infos,

#define iso2022jp_decoder_1B_28 WORDINDEX2INFO(4)
    iso2022jp_decoder_1B_28_offsets,
    iso2022jp_decoder_1B_24_infos,

#define iso2022jp_decoder_1B_infos WORDINDEX2INFO(6)
                     INVALID, iso2022jp_decoder_1B_24,
     iso2022jp_decoder_1B_28,

#define iso2022jp_decoder_1B WORDINDEX2INFO(9)
    iso2022jp_decoder_1B_offsets,
    iso2022jp_decoder_1B_infos,

#define iso2022jp_decoder_infos WORDINDEX2INFO(11)
                    FUNsi,              INVALID,
     iso2022jp_decoder_1B,

#define iso2022jp_decoder WORDINDEX2INFO(14)
    iso2022jp_decoder_offsets,
    iso2022jp_decoder_infos,

#define iso2022jp_decoder_jisx0208_rest WORDINDEX2INFO(16)
    iso2022jp_decoder_jisx0208_rest_offsets,
    iso2022jp_decoder_1B_24_infos,

#define iso2022jp_encoder_90_A1toFE WORDINDEX2INFO(18)
    iso2022jp_encoder_90_A1toFE_offsets,
    iso2022jp_decoder_1B_24_infos,

#define iso2022jp_encoder_90_infos WORDINDEX2INFO(20)
                         INVALID, iso2022jp_encoder_90_A1toFE,

#define iso2022jp_encoder_90 WORDINDEX2INFO(22)
    iso2022jp_encoder_90_A1toFE_offsets,
    iso2022jp_encoder_90_infos,

#define iso2022jp_encoder_infos WORDINDEX2INFO(24)
                    FUNso,              INVALID,
     iso2022jp_encoder_90,

#define iso2022jp_encoder WORDINDEX2INFO(27)
    iso2022jp_encoder_offsets,
    iso2022jp_encoder_infos,

#define stateless_iso2022jp_to_eucjp_infos WORDINDEX2INFO(29)
                    NOMAP,              INVALID,
     iso2022jp_encoder_90,

#define stateless_iso2022jp_to_eucjp WORDINDEX2INFO(32)
    iso2022jp_encoder_offsets,
    stateless_iso2022jp_to_eucjp_infos,

#define eucjp_to_stateless_iso2022jp_8E_infos WORDINDEX2INFO(34)
     INVALID,   UNDEF,

#define eucjp_to_stateless_iso2022jp_8E WORDINDEX2INFO(36)
    iso2022jp_encoder_90_A1toFE_offsets,
    eucjp_to_stateless_iso2022jp_8E_infos,

#define eucjp_to_stateless_iso2022jp_8F_infos WORDINDEX2INFO(38)
                             INVALID, eucjp_to_stateless_iso2022jp_8E,

#define eucjp_to_stateless_iso2022jp_8F WORDINDEX2INFO(40)
    iso2022jp_encoder_90_A1toFE_offsets,
    eucjp_to_stateless_iso2022jp_8F_infos,

#define eucjp_to_stateless_iso2022jp_infos WORDINDEX2INFO(42)
                               NOMAP,                           UNDEF,
                             INVALID, eucjp_to_stateless_iso2022jp_8E,
     eucjp_to_stateless_iso2022jp_8F,     iso2022jp_encoder_90_A1toFE,

#define eucjp_to_stateless_iso2022jp WORDINDEX2INFO(48)
    eucjp_to_stateless_iso2022jp_offsets,
    eucjp_to_stateless_iso2022jp_infos,

#define cp50221_decoder_1B_28 WORDINDEX2INFO(50)
    cp50221_decoder_1B_28_offsets,
    iso2022jp_decoder_1B_24_infos,

#define cp50221_decoder_1B_infos WORDINDEX2INFO(52)
                     INVALID, iso2022jp_decoder_1B_24,
       cp50221_decoder_1B_28,

#define cp50221_decoder_1B WORDINDEX2INFO(55)
    iso2022jp_decoder_1B_offsets,
    cp50221_decoder_1B_infos,

#define cp50221_decoder_infos WORDINDEX2INFO(57)
                  FUNsi,              FUNso,
     cp50221_decoder_1B,            INVALID,

#define cp50221_decoder WORDINDEX2INFO(61)
    cp50221_decoder_offsets,
    cp50221_decoder_infos,

#define cp50221_encoder_infos WORDINDEX2INFO(63)
                           FUNso,                       UNDEF,
                         INVALID, iso2022jp_encoder_90_A1toFE,

#define cp50221_encoder WORDINDEX2INFO(67)
    cp50221_encoder_offsets,
    cp50221_encoder_infos,

};
#define TRANSCODE_TABLE_INFO iso2022_byte_array, 1245, iso2022_word_array, 69, ((int)sizeof(unsigned int))


#define G0_ASCII 0
/* ignore JIS X 0201 latin */
#define G0_JISX0208_1978 1
#define G0_JISX0208_1983 2
#define G0_JISX0201_KATAKANA 3

#define EMACS_MULE_LEADING_CODE_JISX0208_1978   0220
#define EMACS_MULE_LEADING_CODE_JISX0208_1983   0222

static int
iso2022jp_init(void *statep)
{
    unsigned char *sp = statep;
    *sp = G0_ASCII;
    return 0;
}

static unsigned int
fun_si_iso2022jp_decoder(void *statep, const unsigned char *s, size_t l)
{
    unsigned char *sp = statep;
    if (*sp == G0_ASCII)
        return NOMAP;
    else if (0x21 <= s[0] && s[0] <= 0x7e)
        return iso2022jp_decoder_jisx0208_rest;
    else
        return INVALID;
}

static ssize_t
fun_so_iso2022jp_decoder(void *statep, const unsigned char *s, size_t l, unsigned char* o, size_t osize)
{
    unsigned char *sp = statep;
    if (s[0] == 0x1b) {
        if (s[1] == '(') {
            switch (s[l-1]) {
              case 'B':
              case 'J':
                *sp = G0_ASCII;
                break;
            }
        }
        else {
            switch (s[l-1]) {
              case '@':
                *sp = G0_JISX0208_1978;
                break;

              case 'B':
                *sp = G0_JISX0208_1983;
                break;
            }
        }
        return 0;
    }
    else {
        if (*sp == G0_JISX0208_1978)
            o[0] = EMACS_MULE_LEADING_CODE_JISX0208_1978;
        else
            o[0] = EMACS_MULE_LEADING_CODE_JISX0208_1983;
        o[1] = s[0] | 0x80;
        o[2] = s[1] | 0x80;
        return 3;
    }
}

static const rb_transcoder
rb_iso2022jp_decoder = {
    "ISO-2022-JP", "stateless-ISO-2022-JP", iso2022jp_decoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    3, /* max_output */
    asciicompat_decoder, /* asciicompat_type */
    1, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, fun_si_iso2022jp_decoder, NULL, fun_so_iso2022jp_decoder
};

static ssize_t
fun_so_iso2022jp_encoder(void *statep, const unsigned char *s, size_t l, unsigned char *o, size_t osize)
{
    unsigned char *sp = statep;
    unsigned char *output0 = o;
    int newstate;

    if (l == 1)
        newstate = G0_ASCII;
    else if (s[0] == EMACS_MULE_LEADING_CODE_JISX0208_1978)
        newstate = G0_JISX0208_1978;
    else
        newstate = G0_JISX0208_1983;

    if (*sp != newstate) {
        if (newstate == G0_ASCII) {
            *o++ = 0x1b;
            *o++ = '(';
            *o++ = 'B';
        }
        else if (newstate == G0_JISX0208_1978) {
            *o++ = 0x1b;
            *o++ = '$';
            *o++ = '@';
        }
        else {
            *o++ = 0x1b;
            *o++ = '$';
            *o++ = 'B';
        }
        *sp = newstate;
    }

    if (l == 1) {
        *o++ = s[0] & 0x7f;
    }
    else {
        *o++ = s[1] & 0x7f;
        *o++ = s[2] & 0x7f;
    }

    return o - output0;
}

static ssize_t
iso2022jp_encoder_reset_sequence_size(void *statep)
{
    unsigned char *sp = statep;
    if (*sp != G0_ASCII)
        return 3;
    return 0;
}

static ssize_t
finish_iso2022jp_encoder(void *statep, unsigned char *o, size_t osize)
{
    unsigned char *sp = statep;
    unsigned char *output0 = o;

    if (*sp == G0_ASCII)
        return 0;

    *o++ = 0x1b;
    *o++ = '(';
    *o++ = 'B';
    *sp = G0_ASCII;

    return o - output0;
}

static const rb_transcoder
rb_iso2022jp_encoder = {
    "stateless-ISO-2022-JP", "ISO-2022-JP", iso2022jp_encoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    5, /* max_output */
    asciicompat_encoder, /* asciicompat_type */
    1, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, NULL, NULL, fun_so_iso2022jp_encoder,
    finish_iso2022jp_encoder,
    iso2022jp_encoder_reset_sequence_size, finish_iso2022jp_encoder
};

static ssize_t
fun_so_stateless_iso2022jp_to_eucjp(void *statep, const unsigned char *s, size_t l, unsigned char *o, size_t osize)
{
    o[0] = s[1];
    o[1] = s[2];
    return 2;
}

static const rb_transcoder
rb_stateless_iso2022jp_to_eucjp = {
    "stateless-ISO-2022-JP", "EUC-JP", stateless_iso2022jp_to_eucjp,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    2, /* max_output */
    asciicompat_converter, /* asciicompat_type */
    0, NULL, NULL, /* state_size, state_init, state_fini */
    NULL, NULL, NULL, fun_so_stateless_iso2022jp_to_eucjp,
};

static ssize_t
fun_so_eucjp_to_stateless_iso2022jp(void *statep, const unsigned char *s, size_t l, unsigned char *o, size_t osize)
{
    o[0] = EMACS_MULE_LEADING_CODE_JISX0208_1983;
    o[1] = s[0];
    o[2] = s[1];
    return 3;
}

static const rb_transcoder
rb_eucjp_to_stateless_iso2022jp = {
    "EUC-JP", "stateless-ISO-2022-JP", eucjp_to_stateless_iso2022jp,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    3, /* max_output */
    asciicompat_converter, /* asciicompat_type */
    0, NULL, NULL, /* state_size, state_init, state_fini */
    NULL, NULL, NULL, fun_so_eucjp_to_stateless_iso2022jp,
};

static unsigned int
fun_si_cp50221_decoder(void *statep, const unsigned char *s, size_t l)
{
    unsigned char *sp = statep;
    int c;
    switch (*sp) {
      case G0_ASCII:
        if (0xA1 <= s[0] && s[0] <= 0xDF)
            return FUNso;
        return NOMAP;
      case G0_JISX0201_KATAKANA:
        c = s[0] & 0x7F;
        if (0x21 <= c && c <= 0x5f)
            return FUNso;
        break;
      case G0_JISX0208_1978:
        if ((0x21 <= s[0] && s[0] <= 0x28) || (0x30 <= s[0] && s[0] <= 0x74))
            return iso2022jp_decoder_jisx0208_rest;
        break;
      case G0_JISX0208_1983:
        if ((0x21 <= s[0] && s[0] <= 0x28) ||
                s[0] == 0x2D ||
                (0x30 <= s[0] && s[0] <= 0x74) ||
                (0x79 <= s[0] && s[0] <= 0x7C))
                /* 0x7F <= s[0] && s[0] <= 0x92) */
            return iso2022jp_decoder_jisx0208_rest;
        break;
    }
    return INVALID;
}

static ssize_t
fun_so_cp50221_decoder(void *statep, const unsigned char *s, size_t l, unsigned char* o, size_t osize)
{
    unsigned char *sp = statep;
    switch (s[0]) {
      case 0x1b:
        if (s[1] == '(') {
            switch (s[l-1]) {
              case 'B':
              case 'J':
                *sp = G0_ASCII;
                break;
              case 'I':
                *sp = G0_JISX0201_KATAKANA;
                break;
            }
        }
        else {
            switch (s[l-1]) {
              case '@':
                *sp = G0_JISX0208_1978;
                break;
              case 'B':
                *sp = G0_JISX0208_1983;
                break;
            }
        }
        return 0;
      case 0x0E:
        *sp = G0_JISX0201_KATAKANA;
        return 0;
      case 0x0F:
        *sp = G0_ASCII;
        return 0;
      default:
        if (*sp == G0_JISX0201_KATAKANA ||
            (0xA1 <= s[0] && s[0] <= 0xDF && *sp == G0_ASCII)) {
            o[0] = 0x8E;
            o[1] = s[0] | 0x80;
        }
        /* else if (0x7F == s[0] && s[0] <= 0x88) { */
            /* User Defined Characters */
            /* o[n++] = s[0] | 0xE0; */
            /* o[n++] = s[1] | 0x80; */
        /* else if (0x89 <= s[0] && s[0] <= 0x92) { */
            /* User Defined Characters 2 */
            /* o[n++] = 0x8f; */
            /* o[n++] = s[0] + 0x6C; */
            /* o[n++] = s[1] | 0x80; */
        /* } */
        else {
            /* JIS X 0208 */
            /* NEC Special Characters */
            /* NEC-selected IBM extended Characters */
            o[0] = s[0] | 0x80;
            o[1] = s[1] | 0x80;
        }
        return 2;
    }
}

static const rb_transcoder
rb_cp50220_decoder = {
    "CP50220", "cp51932", cp50221_decoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    3, /* max_output */
    asciicompat_decoder, /* asciicompat_type */
    1, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, fun_si_cp50221_decoder, NULL, fun_so_cp50221_decoder
};

static const rb_transcoder
rb_cp50221_decoder = {
    "CP50221", "cp51932", cp50221_decoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    3, /* max_output */
    asciicompat_decoder, /* asciicompat_type */
    1, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, fun_si_cp50221_decoder, NULL, fun_so_cp50221_decoder
};

static ssize_t
fun_so_cp5022x_encoder(void *statep, const unsigned char *s, size_t l,
        unsigned char *o, size_t osize)
{
    unsigned char *sp = statep;
    unsigned char *output0 = o;
    int newstate;

    if (l == 1)
        newstate = G0_ASCII;
    else if (s[0] == 0x8E) {
        s++;
        l = 1;
        newstate = G0_JISX0201_KATAKANA;
    }
    else
        newstate = G0_JISX0208_1983;

    if (*sp != newstate) {
        if (newstate == G0_ASCII) {
            *o++ = 0x1b;
            *o++ = '(';
            *o++ = 'B';
        }
        else if (newstate == G0_JISX0201_KATAKANA) {
            *o++ = 0x1b;
            *o++ = '(';
            *o++ = 'I';
        }
        else {
            *o++ = 0x1b;
            *o++ = '$';
            *o++ = 'B';
        }
        *sp = newstate;
    }

    if (l == 1) {
        *o++ = s[0] & 0x7f;
    }
    else {
        *o++ = s[0] & 0x7f;
        *o++ = s[1] & 0x7f;
    }

    return o - output0;
}

static const rb_transcoder
rb_cp50221_encoder = {
    "CP51932", "CP50221", cp50221_encoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    5, /* max_output */
    asciicompat_encoder, /* asciicompat_type */
    1, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, NULL, NULL, fun_so_cp5022x_encoder,
    finish_iso2022jp_encoder,
    iso2022jp_encoder_reset_sequence_size, finish_iso2022jp_encoder
};

static const char *tbl0208 =
    "\x21\x23\x21\x56\x21\x57\x21\x22\x21\x26\x25\x72\x25\x21\x25\x23" \
    "\x25\x25\x25\x27\x25\x29\x25\x63\x25\x65\x25\x67\x25\x43\x21\x3C" \
    "\x25\x22\x25\x24\x25\x26\x25\x28\x25\x2A\x25\x2B\x25\x2D\x25\x2F" \
    "\x25\x31\x25\x33\x25\x35\x25\x37\x25\x39\x25\x3B\x25\x3D\x25\x3F" \
    "\x25\x41\x25\x44\x25\x46\x25\x48\x25\x4A\x25\x4B\x25\x4C\x25\x4D" \
    "\x25\x4E\x25\x4F\x25\x52\x25\x55\x25\x58\x25\x5B\x25\x5E\x25\x5F" \
    "\x25\x60\x25\x61\x25\x62\x25\x64\x25\x66\x25\x68\x25\x69\x25\x6A" \
    "\x25\x6B\x25\x6C\x25\x6D\x25\x6F\x25\x73\x21\x2B\x21\x2C";

static ssize_t
fun_so_cp50220_encoder(void *statep, const unsigned char *s, size_t l,
                unsigned char *o, size_t osize)
{
    unsigned char *output0 = o;
    unsigned char *sp = statep;

    if (sp[0] == G0_JISX0201_KATAKANA) {
        int c = sp[2] & 0x7F;
        const char *p = tbl0208 + (c - 0x21) * 2;
        if (sp[1] != G0_JISX0208_1983) {
            *o++ = 0x1b;
            *o++ = '$';
            *o++ = 'B';
        }
        sp[0] = G0_JISX0208_1983;
        *o++ = *p++;
        if (l == 2 && s[0] == 0x8E) {
            if (s[1] == 0xDE) {
                *o++ = *p + 1;
                return o - output0;
            }
            else if (s[1] == 0xDF && (0x4A <= c && c <= 0x4E)) {
                *o++ = *p + 2;
                return o - output0;
            }
        }
        *o++ = *p;
    }

    if (l == 2 && s[0] == 0x8E) {
        const char *p = tbl0208 + (s[1] - 0xA1) * 2;
        if ((0xA1 <= s[1] && s[1] <= 0xB5) ||
            (0xC5 <= s[1] && s[1] <= 0xC9) ||
            (0xCF <= s[1] && s[1] <= 0xDF)) {
            if (*sp != G0_JISX0208_1983) {
                *o++ = 0x1b;
                *o++ = '$';
                *o++ = 'B';
                *sp = G0_JISX0208_1983;
            }
            *o++ = *p++;
            *o++ = *p;
            return o - output0;
        }

        sp[2] = s[1];
        sp[1] = sp[0];
        sp[0] = G0_JISX0201_KATAKANA;
        return o - output0;
    }

    o += fun_so_cp5022x_encoder(statep, s, l, o, osize);
    return o - output0;
}

static ssize_t
finish_cp50220_encoder(void *statep, unsigned char *o, size_t osize)
{
    unsigned char *sp = statep;
    unsigned char *output0 = o;

    if (*sp == G0_ASCII)
        return 0;

    if (sp[0] == G0_JISX0201_KATAKANA) {
        int c = sp[2] & 0x7F;
        const char *p = tbl0208 + (c - 0x21) * 2;
        if (sp[1] != G0_JISX0208_1983) {
            *o++ = 0x1b;
            *o++ = '$';
            *o++ = 'B';
        }
        sp[0] = G0_JISX0208_1983;
        *o++ = *p++;
        *o++ = *p;
    }

    *o++ = 0x1b;
    *o++ = '(';
    *o++ = 'B';
    *sp = G0_ASCII;

    return o - output0;
}

static const rb_transcoder
rb_cp50220_encoder = {
    "CP51932", "CP50220", cp50221_encoder,
    TRANSCODE_TABLE_INFO,
    1, /* input_unit_length */
    3, /* max_input */
    5, /* max_output */
    asciicompat_encoder, /* asciicompat_type */
    3, iso2022jp_init, iso2022jp_init, /* state_size, state_init, state_fini */
    NULL, NULL, NULL, fun_so_cp50220_encoder,
    finish_cp50220_encoder,
    iso2022jp_encoder_reset_sequence_size, finish_cp50220_encoder
};

TRANS_INIT(iso2022)
{
    rb_register_transcoder(&rb_iso2022jp_decoder);
    rb_register_transcoder(&rb_iso2022jp_encoder);
    rb_register_transcoder(&rb_stateless_iso2022jp_to_eucjp);
    rb_register_transcoder(&rb_eucjp_to_stateless_iso2022jp);
    rb_register_transcoder(&rb_cp50220_decoder);
    rb_register_transcoder(&rb_cp50221_decoder);
    rb_register_transcoder(&rb_cp50220_encoder);
    rb_register_transcoder(&rb_cp50221_encoder);
}


