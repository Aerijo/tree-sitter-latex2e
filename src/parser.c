#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 102
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__escape_char = 1,
  sym_begin_group = 2,
  sym_end_group = 3,
  anon_sym_DOLLAR = 4,
  sym_alignment_tab = 5,
  sym__end_of_line = 6,
  sym_parameter_token = 7,
  sym_superscript = 8,
  sym_subscript = 9,
  sym_active_char = 10,
  sym_display_math_shift = 11,
  sym_text = 12,
  sym_symbol = 13,
  sym_letters = 14,
  sym__trailing_space = 15,
  anon_sym_ = 16,
  anon_sym_section = 17,
  anon_sym_verb = 18,
  anon_sym_begin = 19,
  anon_sym_end = 20,
  sym__error = 21,
  sym_verb = 22,
  sym_comment = 23,
  sym_magic_comment = 24,
  sym_star = 25,
  sym_s_whitespace = 26,
  sym_m_whitespace = 27,
  sym_program = 28,
  sym_inline_math_shift = 29,
  sym__text_mode = 30,
  sym__simple_group_mode = 31,
  sym_text_group = 32,
  sym__control_sequence = 33,
  sym_control_symbol = 34,
  sym_control_word = 35,
  sym_section = 36,
  sym_verbatim = 37,
  sym_environment = 38,
  sym_env_body = 39,
  sym_open_env = 40,
  sym_begin_command = 41,
  sym_close_env = 42,
  sym_end_command = 43,
  aux_sym__text_mode_repeat1 = 44,
  aux_sym__simple_group_mode_repeat1 = 45,
  aux_sym_section_repeat1 = 46,
  alias_sym_cs = 47,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__escape_char] = "_escape_char",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [anon_sym_DOLLAR] = "$",
  [sym_alignment_tab] = "alignment_tab",
  [sym__end_of_line] = "_end_of_line",
  [sym_parameter_token] = "parameter_token",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_active_char] = "active_char",
  [sym_display_math_shift] = "display_math_shift",
  [sym_text] = "text",
  [sym_symbol] = "cs",
  [sym_letters] = "letters",
  [sym__trailing_space] = "_trailing_space",
  [anon_sym_] = "cs",
  [anon_sym_section] = "cs",
  [anon_sym_verb] = "cs",
  [anon_sym_begin] = "cs",
  [anon_sym_end] = "cs",
  [sym__error] = "_error",
  [sym_verb] = "verb",
  [sym_comment] = "comment",
  [sym_magic_comment] = "magic_comment",
  [sym_star] = "star",
  [sym_s_whitespace] = "s_whitespace",
  [sym_m_whitespace] = "m_whitespace",
  [sym_program] = "program",
  [sym_inline_math_shift] = "inline_math_shift",
  [sym__text_mode] = "_text_mode",
  [sym__simple_group_mode] = "env_name",
  [sym_text_group] = "text_group",
  [sym__control_sequence] = "_control_sequence",
  [sym_control_symbol] = "control_symbol",
  [sym_control_word] = "control_word",
  [sym_section] = "section",
  [sym_verbatim] = "verbatim",
  [sym_environment] = "environment",
  [sym_env_body] = "env_body",
  [sym_open_env] = "open_env",
  [sym_begin_command] = "begin_command",
  [sym_close_env] = "close_env",
  [sym_end_command] = "end_command",
  [aux_sym__text_mode_repeat1] = "_text_mode_repeat1",
  [aux_sym__simple_group_mode_repeat1] = "_simple_group_mode_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [alias_sym_cs] = "cs",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_char] = {
    .visible = false,
    .named = true,
  },
  [sym_begin_group] = {
    .visible = true,
    .named = true,
  },
  [sym_end_group] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_token] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_letters] = {
    .visible = true,
    .named = true,
  },
  [sym__trailing_space] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verb] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym__error] = {
    .visible = false,
    .named = true,
  },
  [sym_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_magic_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_s_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_m_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_group_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym__control_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_control_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_control_word] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_env_body] = {
    .visible = true,
    .named = true,
  },
  [sym_open_env] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_command] = {
    .visible = true,
    .named = true,
  },
  [sym_close_env] = {
    .visible = true,
    .named = true,
  },
  [sym_end_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__simple_group_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_cs] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_cs,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == ' ')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '^')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == 'b')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(12);
      if (lookahead == 'v')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead == '~')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r')
        ADVANCE(17);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__end_of_line);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_parameter_token);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__escape_char);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'e')
        ADVANCE(21);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'n')
        ADVANCE(22);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'e')
        ADVANCE(23);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'e')
        ADVANCE(24);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_letters);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__trailing_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'g')
        ADVANCE(25);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'd')
        ADVANCE(26);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'c')
        ADVANCE(27);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'r')
        ADVANCE(28);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'i')
        ADVANCE(29);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 't')
        ADVANCE(30);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'b')
        ADVANCE(31);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'n')
        ADVANCE(32);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'i')
        ADVANCE(33);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'o')
        ADVANCE(34);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'n')
        ADVANCE(35);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_section);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ' ')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(10);
      if (lookahead == 's')
        ADVANCE(12);
      if (lookahead == 'v')
        ADVANCE(13);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 40:
      if (lookahead == ' ')
        ADVANCE(39);
      if (lookahead == 'b')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(12);
      if (lookahead == 'v')
        ADVANCE(13);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == '$')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '#' || '&' < lookahead) &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '~')
        ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_display_math_shift);
      END_STATE();
    case 44:
      if (lookahead == ' ')
        ADVANCE(39);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 36, .external_lex_state = 2},
  [3] = {.lex_state = 38, .external_lex_state = 3},
  [4] = {.lex_state = 36, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 36, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 38, .external_lex_state = 3},
  [10] = {.lex_state = 36, .external_lex_state = 2},
  [11] = {.lex_state = 36, .external_lex_state = 3},
  [12] = {.lex_state = 36, .external_lex_state = 2},
  [13] = {.lex_state = 36, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 36, .external_lex_state = 5},
  [16] = {.lex_state = 36, .external_lex_state = 2},
  [17] = {.lex_state = 36, .external_lex_state = 3},
  [18] = {.lex_state = 36, .external_lex_state = 2},
  [19] = {.lex_state = 40, .external_lex_state = 3},
  [20] = {.lex_state = 36, .external_lex_state = 3},
  [21] = {.lex_state = 36, .external_lex_state = 2},
  [22] = {.lex_state = 36, .external_lex_state = 3},
  [23] = {.lex_state = 36, .external_lex_state = 3},
  [24] = {.lex_state = 36, .external_lex_state = 2},
  [25] = {.lex_state = 41, .external_lex_state = 3},
  [26] = {.lex_state = 36, .external_lex_state = 2},
  [27] = {.lex_state = 36, .external_lex_state = 5},
  [28] = {.lex_state = 36, .external_lex_state = 2},
  [29] = {.lex_state = 36, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 36, .external_lex_state = 6},
  [32] = {.lex_state = 36, .external_lex_state = 7},
  [33] = {.lex_state = 36, .external_lex_state = 6},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 36, .external_lex_state = 3},
  [36] = {.lex_state = 36, .external_lex_state = 5},
  [37] = {.lex_state = 40, .external_lex_state = 3},
  [38] = {.lex_state = 36, .external_lex_state = 2},
  [39] = {.lex_state = 41, .external_lex_state = 3},
  [40] = {.lex_state = 38, .external_lex_state = 3},
  [41] = {.lex_state = 36, .external_lex_state = 2},
  [42] = {.lex_state = 41, .external_lex_state = 3},
  [43] = {.lex_state = 44, .external_lex_state = 3},
  [44] = {.lex_state = 36, .external_lex_state = 2},
  [45] = {.lex_state = 41, .external_lex_state = 3},
  [46] = {.lex_state = 36, .external_lex_state = 3},
  [47] = {.lex_state = 36, .external_lex_state = 6},
  [48] = {.lex_state = 36, .external_lex_state = 7},
  [49] = {.lex_state = 36, .external_lex_state = 6},
  [50] = {.lex_state = 36, .external_lex_state = 7},
  [51] = {.lex_state = 36, .external_lex_state = 6},
  [52] = {.lex_state = 36, .external_lex_state = 2},
  [53] = {.lex_state = 36, .external_lex_state = 8},
  [54] = {.lex_state = 36, .external_lex_state = 8},
  [55] = {.lex_state = 36, .external_lex_state = 6},
  [56] = {.lex_state = 36, .external_lex_state = 6},
  [57] = {.lex_state = 36, .external_lex_state = 7},
  [58] = {.lex_state = 36, .external_lex_state = 6},
  [59] = {.lex_state = 36, .external_lex_state = 2},
  [60] = {.lex_state = 36, .external_lex_state = 3},
  [61] = {.lex_state = 41, .external_lex_state = 3},
  [62] = {.lex_state = 41, .external_lex_state = 3},
  [63] = {.lex_state = 41, .external_lex_state = 3},
  [64] = {.lex_state = 41, .external_lex_state = 3},
  [65] = {.lex_state = 36, .external_lex_state = 2},
  [66] = {.lex_state = 36, .external_lex_state = 7},
  [67] = {.lex_state = 36, .external_lex_state = 6},
  [68] = {.lex_state = 36, .external_lex_state = 8},
  [69] = {.lex_state = 36, .external_lex_state = 8},
  [70] = {.lex_state = 36, .external_lex_state = 6},
  [71] = {.lex_state = 36, .external_lex_state = 8},
  [72] = {.lex_state = 36, .external_lex_state = 8},
  [73] = {.lex_state = 36, .external_lex_state = 2},
  [74] = {.lex_state = 36, .external_lex_state = 7},
  [75] = {.lex_state = 36, .external_lex_state = 8},
  [76] = {.lex_state = 36, .external_lex_state = 7},
  [77] = {.lex_state = 36, .external_lex_state = 6},
  [78] = {.lex_state = 36, .external_lex_state = 8},
  [79] = {.lex_state = 36, .external_lex_state = 8},
  [80] = {.lex_state = 36, .external_lex_state = 6},
  [81] = {.lex_state = 36, .external_lex_state = 2},
  [82] = {.lex_state = 36, .external_lex_state = 8},
  [83] = {.lex_state = 36, .external_lex_state = 8},
  [84] = {.lex_state = 36, .external_lex_state = 7},
  [85] = {.lex_state = 36, .external_lex_state = 8},
  [86] = {.lex_state = 36, .external_lex_state = 8},
  [87] = {.lex_state = 36, .external_lex_state = 2},
  [88] = {.lex_state = 36, .external_lex_state = 8},
  [89] = {.lex_state = 36, .external_lex_state = 8},
  [90] = {.lex_state = 36, .external_lex_state = 8},
  [91] = {.lex_state = 36, .external_lex_state = 7},
  [92] = {.lex_state = 36, .external_lex_state = 8},
  [93] = {.lex_state = 36, .external_lex_state = 8},
  [94] = {.lex_state = 36, .external_lex_state = 8},
  [95] = {.lex_state = 36, .external_lex_state = 2},
  [96] = {.lex_state = 36, .external_lex_state = 8},
  [97] = {.lex_state = 36, .external_lex_state = 8},
  [98] = {.lex_state = 36, .external_lex_state = 8},
  [99] = {.lex_state = 36, .external_lex_state = 8},
  [100] = {.lex_state = 36, .external_lex_state = 2},
  [101] = {.lex_state = 36, .external_lex_state = 8},
};

enum {
  ts_external_token__error = 0,
  ts_external_token_verb = 1,
  ts_external_token_comment = 2,
  ts_external_token_magic_comment = 3,
  ts_external_token_star = 4,
  ts_external_token_s_whitespace = 5,
  ts_external_token_m_whitespace = 6,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__error] = sym__error,
  [ts_external_token_verb] = sym_verb,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_magic_comment] = sym_magic_comment,
  [ts_external_token_star] = sym_star,
  [ts_external_token_s_whitespace] = sym_s_whitespace,
  [ts_external_token_m_whitespace] = sym_m_whitespace,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__error] = true,
    [ts_external_token_s_whitespace] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_star] = true,
    [ts_external_token_verb] = true,
    [ts_external_token_m_whitespace] = true,
    [ts_external_token_magic_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_verb] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_s_whitespace] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_star] = true,
    [ts_external_token_m_whitespace] = true,
    [ts_external_token_magic_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_star] = true,
    [ts_external_token_m_whitespace] = true,
    [ts_external_token_magic_comment] = true,
  },
  [7] = {
    [ts_external_token_s_whitespace] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_m_whitespace] = true,
    [ts_external_token_magic_comment] = true,
  },
  [8] = {
    [ts_external_token_magic_comment] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_m_whitespace] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__error] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
    [sym__trailing_space] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__escape_char] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(1),
    [sym_m_whitespace] = ACTIONS(1),
    [anon_sym_verb] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_s_whitespace] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_letters] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [sym_verb] = ACTIONS(1),
    [sym_star] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_parameter_token] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [sym_magic_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_open_env] = STATE(4),
    [sym__text_mode] = STATE(5),
    [sym_section] = STATE(8),
    [sym_verbatim] = STATE(8),
    [sym_begin_command] = STATE(6),
    [sym_program] = STATE(7),
    [sym_text_group] = STATE(8),
    [sym__control_sequence] = STATE(8),
    [sym_environment] = STATE(8),
    [aux_sym__text_mode_repeat1] = STATE(8),
    [sym_control_symbol] = STATE(8),
    [sym_control_word] = STATE(8),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [sym__escape_char] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_magic_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_open_env] = STATE(4),
    [sym__text_mode] = STATE(11),
    [sym_section] = STATE(12),
    [sym_verbatim] = STATE(12),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(12),
    [sym__control_sequence] = STATE(12),
    [sym_environment] = STATE(12),
    [aux_sym__text_mode_repeat1] = STATE(12),
    [sym_control_symbol] = STATE(12),
    [sym_control_word] = STATE(12),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(13),
    [sym__escape_char] = ACTIONS(15),
    [sym_end_group] = ACTIONS(17),
    [sym_magic_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_symbol] = ACTIONS(19),
    [anon_sym_verb] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(23),
    [sym_letters] = ACTIONS(25),
    [anon_sym_begin] = ACTIONS(27),
    [anon_sym_] = ACTIONS(29),
  },
  [4] = {
    [sym_open_env] = STATE(4),
    [sym__text_mode] = STATE(20),
    [sym_section] = STATE(24),
    [sym_verbatim] = STATE(24),
    [sym_begin_command] = STATE(6),
    [sym_close_env] = STATE(21),
    [sym_text_group] = STATE(24),
    [sym__control_sequence] = STATE(24),
    [sym_environment] = STATE(24),
    [sym_env_body] = STATE(22),
    [sym_end_command] = STATE(23),
    [aux_sym__text_mode_repeat1] = STATE(24),
    [sym_control_symbol] = STATE(24),
    [sym_control_word] = STATE(24),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(31),
    [sym__escape_char] = ACTIONS(33),
    [sym_magic_comment] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_begin_group] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(26),
    [sym_verbatim] = STATE(26),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(26),
    [sym__control_sequence] = STATE(26),
    [sym_environment] = STATE(26),
    [aux_sym__text_mode_repeat1] = STATE(26),
    [sym_control_symbol] = STATE(26),
    [sym_control_word] = STATE(26),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_text] = ACTIONS(43),
    [sym__escape_char] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_magic_comment] = ACTIONS(43),
  },
  [9] = {
    [sym_symbol] = ACTIONS(19),
    [anon_sym_verb] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(45),
    [sym_letters] = ACTIONS(25),
    [anon_sym_begin] = ACTIONS(27),
    [anon_sym_] = ACTIONS(29),
  },
  [10] = {
    [sym_begin_group] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_text] = ACTIONS(47),
    [sym__escape_char] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(47),
    [sym_magic_comment] = ACTIONS(47),
  },
  [11] = {
    [sym_end_group] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(29),
    [sym_verbatim] = STATE(29),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(29),
    [sym__control_sequence] = STATE(29),
    [sym_environment] = STATE(29),
    [aux_sym__text_mode_repeat1] = STATE(29),
    [sym_control_symbol] = STATE(29),
    [sym_control_word] = STATE(29),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(51),
    [sym__escape_char] = ACTIONS(15),
    [sym_end_group] = ACTIONS(41),
    [sym_magic_comment] = ACTIONS(51),
  },
  [13] = {
    [sym_begin_group] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_text] = ACTIONS(53),
    [sym__escape_char] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(53),
    [sym_magic_comment] = ACTIONS(53),
  },
  [14] = {
    [sym_verb] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_section_repeat1] = STATE(33),
    [sym_text_group] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__escape_char] = ACTIONS(57),
    [sym_star] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(61),
    [sym_text] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(63),
    [sym_magic_comment] = ACTIONS(57),
  },
  [16] = {
    [sym_begin_group] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
    [sym__escape_char] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(65),
    [sym_magic_comment] = ACTIONS(65),
  },
  [17] = {
    [sym_begin_group] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_begin_group] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
    [sym__escape_char] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(69),
    [sym_magic_comment] = ACTIONS(69),
  },
  [19] = {
    [anon_sym_end] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(73),
    [anon_sym_] = ACTIONS(29),
    [sym_symbol] = ACTIONS(19),
    [anon_sym_verb] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_letters] = ACTIONS(25),
    [anon_sym_begin] = ACTIONS(27),
  },
  [20] = {
    [sym__escape_char] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_begin_group] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_text] = ACTIONS(77),
    [sym__escape_char] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(77),
    [sym_magic_comment] = ACTIONS(77),
  },
  [22] = {
    [sym_close_env] = STATE(38),
    [sym_end_command] = STATE(23),
    [sym__escape_char] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_begin_group] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(41),
    [sym_verbatim] = STATE(41),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(41),
    [sym__control_sequence] = STATE(41),
    [sym_environment] = STATE(41),
    [aux_sym__text_mode_repeat1] = STATE(41),
    [sym_control_symbol] = STATE(41),
    [sym_control_word] = STATE(41),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(83),
    [sym__escape_char] = ACTIONS(85),
    [sym_magic_comment] = ACTIONS(83),
  },
  [25] = {
    [sym__control_sequence] = STATE(45),
    [aux_sym__simple_group_mode_repeat1] = STATE(45),
    [sym__simple_group_mode] = STATE(46),
    [sym_inline_math_shift] = STATE(45),
    [sym_control_symbol] = STATE(45),
    [sym_control_word] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(87),
    [sym__escape_char] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_end_group] = ACTIONS(93),
  },
  [26] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(26),
    [sym_verbatim] = STATE(26),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(26),
    [sym__control_sequence] = STATE(26),
    [sym_environment] = STATE(26),
    [aux_sym__text_mode_repeat1] = STATE(26),
    [sym_control_symbol] = STATE(26),
    [sym_control_word] = STATE(26),
    [sym_begin_group] = ACTIONS(95),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_text] = ACTIONS(100),
    [sym__escape_char] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym_magic_comment] = ACTIONS(100),
  },
  [27] = {
    [aux_sym_section_repeat1] = STATE(49),
    [sym_text_group] = STATE(34),
    [sym_m_whitespace] = ACTIONS(106),
    [sym__escape_char] = ACTIONS(57),
    [sym_star] = ACTIONS(108),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(110),
    [sym_text] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(57),
    [sym_magic_comment] = ACTIONS(57),
  },
  [28] = {
    [sym_begin_group] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_text] = ACTIONS(112),
    [sym__escape_char] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(112),
    [sym_magic_comment] = ACTIONS(112),
  },
  [29] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(29),
    [sym_verbatim] = STATE(29),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(29),
    [sym__control_sequence] = STATE(29),
    [sym_environment] = STATE(29),
    [aux_sym__text_mode_repeat1] = STATE(29),
    [sym_control_symbol] = STATE(29),
    [sym_control_word] = STATE(29),
    [sym_begin_group] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(114),
    [sym__escape_char] = ACTIONS(117),
    [sym_end_group] = ACTIONS(98),
    [sym_magic_comment] = ACTIONS(114),
  },
  [30] = {
    [sym_begin_group] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_text] = ACTIONS(120),
    [sym__escape_char] = ACTIONS(120),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(120),
    [sym_magic_comment] = ACTIONS(120),
  },
  [31] = {
    [aux_sym_section_repeat1] = STATE(51),
    [sym_text_group] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(124),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym_m_whitespace] = ACTIONS(126),
    [sym_magic_comment] = ACTIONS(122),
  },
  [32] = {
    [aux_sym_section_repeat1] = STATE(54),
    [sym_text_group] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(128),
    [sym_text] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(130),
    [sym_magic_comment] = ACTIONS(122),
  },
  [33] = {
    [aux_sym_section_repeat1] = STATE(55),
    [sym_text_group] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(124),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym_m_whitespace] = ACTIONS(132),
    [sym_magic_comment] = ACTIONS(122),
  },
  [34] = {
    [sym_begin_group] = ACTIONS(122),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_text] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(122),
    [sym_magic_comment] = ACTIONS(122),
  },
  [35] = {
    [sym_begin_group] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_section_repeat1] = STATE(58),
    [sym_text_group] = STATE(34),
    [sym__escape_char] = ACTIONS(57),
    [sym_star] = ACTIONS(136),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(138),
    [sym_text] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(140),
    [sym_magic_comment] = ACTIONS(57),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(142),
  },
  [38] = {
    [sym_begin_group] = ACTIONS(144),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_text] = ACTIONS(144),
    [sym__escape_char] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(144),
    [sym_magic_comment] = ACTIONS(144),
  },
  [39] = {
    [sym__control_sequence] = STATE(45),
    [aux_sym__simple_group_mode_repeat1] = STATE(45),
    [sym__simple_group_mode] = STATE(60),
    [sym_inline_math_shift] = STATE(45),
    [sym_control_symbol] = STATE(45),
    [sym_control_word] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(87),
    [sym__escape_char] = ACTIONS(89),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [sym_display_math_shift] = ACTIONS(87),
    [sym_end_group] = ACTIONS(146),
  },
  [40] = {
    [sym_symbol] = ACTIONS(19),
    [anon_sym_verb] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(73),
    [sym_letters] = ACTIONS(25),
    [anon_sym_begin] = ACTIONS(27),
    [anon_sym_] = ACTIONS(29),
  },
  [41] = {
    [sym_open_env] = STATE(4),
    [sym_section] = STATE(41),
    [sym_verbatim] = STATE(41),
    [sym_begin_command] = STATE(6),
    [sym_text_group] = STATE(41),
    [sym__control_sequence] = STATE(41),
    [sym_environment] = STATE(41),
    [aux_sym__text_mode_repeat1] = STATE(41),
    [sym_control_symbol] = STATE(41),
    [sym_control_word] = STATE(41),
    [sym_begin_group] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(148),
    [sym__escape_char] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(148),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [sym__escape_char] = ACTIONS(156),
    [sym_text] = ACTIONS(156),
    [sym_end_group] = ACTIONS(156),
    [sym_display_math_shift] = ACTIONS(156),
  },
  [43] = {
    [sym_symbol] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_letters] = ACTIONS(160),
    [anon_sym_] = ACTIONS(162),
  },
  [44] = {
    [sym_begin_group] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(164),
    [sym__escape_char] = ACTIONS(164),
    [sym_magic_comment] = ACTIONS(164),
  },
  [45] = {
    [sym__control_sequence] = STATE(64),
    [aux_sym__simple_group_mode_repeat1] = STATE(64),
    [sym_inline_math_shift] = STATE(64),
    [sym_control_symbol] = STATE(64),
    [sym_control_word] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(91),
    [sym__escape_char] = ACTIONS(89),
    [sym_text] = ACTIONS(166),
    [sym_end_group] = ACTIONS(168),
    [sym_display_math_shift] = ACTIONS(166),
  },
  [46] = {
    [sym_end_group] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [aux_sym_section_repeat1] = STATE(67),
    [sym_text_group] = STATE(52),
    [sym_magic_comment] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(172),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym_m_whitespace] = ACTIONS(174),
    [sym_end_group] = ACTIONS(122),
  },
  [48] = {
    [aux_sym_section_repeat1] = STATE(69),
    [sym_text_group] = STATE(52),
    [sym_magic_comment] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(176),
    [sym_text] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(178),
    [sym_end_group] = ACTIONS(122),
  },
  [49] = {
    [aux_sym_section_repeat1] = STATE(70),
    [sym_text_group] = STATE(52),
    [sym_magic_comment] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(172),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym_m_whitespace] = ACTIONS(180),
    [sym_end_group] = ACTIONS(122),
  },
  [50] = {
    [aux_sym_section_repeat1] = STATE(72),
    [sym_text_group] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(184),
    [sym_text] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(186),
    [sym_magic_comment] = ACTIONS(182),
  },
  [51] = {
    [aux_sym_section_repeat1] = STATE(55),
    [sym_text_group] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_star] = ACTIONS(188),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym_m_whitespace] = ACTIONS(132),
    [sym_magic_comment] = ACTIONS(182),
  },
  [52] = {
    [sym_begin_group] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(182),
    [sym_magic_comment] = ACTIONS(182),
  },
  [53] = {
    [aux_sym_section_repeat1] = STATE(72),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(186),
    [sym_magic_comment] = ACTIONS(182),
  },
  [54] = {
    [aux_sym_section_repeat1] = STATE(75),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(190),
    [sym_magic_comment] = ACTIONS(182),
  },
  [55] = {
    [aux_sym_section_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_star] = ACTIONS(192),
    [sym_begin_group] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(192),
    [sym_m_whitespace] = ACTIONS(194),
    [sym_magic_comment] = ACTIONS(192),
  },
  [56] = {
    [aux_sym_section_repeat1] = STATE(77),
    [sym_text_group] = STATE(52),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(197),
    [sym_m_whitespace] = ACTIONS(199),
    [sym_magic_comment] = ACTIONS(122),
  },
  [57] = {
    [aux_sym_section_repeat1] = STATE(79),
    [sym_text_group] = STATE(52),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(201),
    [sym_text] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(203),
    [sym_magic_comment] = ACTIONS(122),
  },
  [58] = {
    [aux_sym_section_repeat1] = STATE(80),
    [sym_text_group] = STATE(52),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(122),
    [sym__escape_char] = ACTIONS(122),
    [sym_star] = ACTIONS(197),
    [sym_m_whitespace] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(122),
  },
  [59] = {
    [sym_begin_group] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
    [sym__escape_char] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(207),
  },
  [60] = {
    [sym_end_group] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [sym__escape_char] = ACTIONS(53),
    [sym_text] = ACTIONS(53),
    [sym_end_group] = ACTIONS(53),
    [sym_display_math_shift] = ACTIONS(53),
  },
  [62] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [sym__escape_char] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
    [sym_end_group] = ACTIONS(65),
    [sym_display_math_shift] = ACTIONS(65),
  },
  [63] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym__escape_char] = ACTIONS(69),
    [sym_text] = ACTIONS(69),
    [sym_end_group] = ACTIONS(69),
    [sym_display_math_shift] = ACTIONS(69),
  },
  [64] = {
    [sym__control_sequence] = STATE(64),
    [aux_sym__simple_group_mode_repeat1] = STATE(64),
    [sym_inline_math_shift] = STATE(64),
    [sym_control_symbol] = STATE(64),
    [sym_control_word] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym__escape_char] = ACTIONS(220),
    [sym_text] = ACTIONS(223),
    [sym_end_group] = ACTIONS(226),
    [sym_display_math_shift] = ACTIONS(223),
  },
  [65] = {
    [sym_begin_group] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(228),
    [sym__escape_char] = ACTIONS(228),
    [sym_magic_comment] = ACTIONS(228),
  },
  [66] = {
    [aux_sym_section_repeat1] = STATE(83),
    [sym_text_group] = STATE(73),
    [sym_magic_comment] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(230),
    [sym_text] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(232),
    [sym_end_group] = ACTIONS(182),
  },
  [67] = {
    [aux_sym_section_repeat1] = STATE(70),
    [sym_text_group] = STATE(73),
    [sym_magic_comment] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_star] = ACTIONS(234),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym_m_whitespace] = ACTIONS(180),
    [sym_end_group] = ACTIONS(182),
  },
  [68] = {
    [aux_sym_section_repeat1] = STATE(83),
    [sym_text_group] = STATE(73),
    [sym_m_whitespace] = ACTIONS(232),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_end_group] = ACTIONS(182),
    [sym_magic_comment] = ACTIONS(182),
  },
  [69] = {
    [aux_sym_section_repeat1] = STATE(85),
    [sym_text_group] = STATE(73),
    [sym_m_whitespace] = ACTIONS(236),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_end_group] = ACTIONS(182),
    [sym_magic_comment] = ACTIONS(182),
  },
  [70] = {
    [aux_sym_section_repeat1] = STATE(70),
    [sym_magic_comment] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_star] = ACTIONS(192),
    [sym_begin_group] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(192),
    [sym_m_whitespace] = ACTIONS(238),
    [sym_end_group] = ACTIONS(192),
  },
  [71] = {
    [aux_sym_section_repeat1] = STATE(86),
    [sym_text_group] = STATE(87),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(241),
  },
  [72] = {
    [aux_sym_section_repeat1] = STATE(75),
    [sym_text_group] = STATE(87),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(190),
    [sym_magic_comment] = ACTIONS(241),
  },
  [73] = {
    [sym_begin_group] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(241),
  },
  [74] = {
    [aux_sym_section_repeat1] = STATE(86),
    [sym_text_group] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(245),
    [sym_text] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(243),
    [sym_magic_comment] = ACTIONS(241),
  },
  [75] = {
    [aux_sym_section_repeat1] = STATE(75),
    [sym_begin_group] = ACTIONS(192),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_text] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(247),
    [sym_magic_comment] = ACTIONS(192),
  },
  [76] = {
    [aux_sym_section_repeat1] = STATE(90),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(250),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(252),
    [sym_magic_comment] = ACTIONS(182),
  },
  [77] = {
    [aux_sym_section_repeat1] = STATE(80),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_star] = ACTIONS(254),
    [sym_m_whitespace] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(182),
  },
  [78] = {
    [aux_sym_section_repeat1] = STATE(90),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_m_whitespace] = ACTIONS(252),
    [sym_magic_comment] = ACTIONS(182),
  },
  [79] = {
    [aux_sym_section_repeat1] = STATE(92),
    [sym_text_group] = STATE(73),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(182),
    [sym__escape_char] = ACTIONS(182),
    [sym_m_whitespace] = ACTIONS(256),
    [sym_magic_comment] = ACTIONS(182),
  },
  [80] = {
    [aux_sym_section_repeat1] = STATE(80),
    [sym_begin_group] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_star] = ACTIONS(192),
    [sym_m_whitespace] = ACTIONS(258),
    [sym_magic_comment] = ACTIONS(192),
  },
  [81] = {
    [sym_begin_group] = ACTIONS(261),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_text] = ACTIONS(261),
    [sym__escape_char] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(261),
    [sym_magic_comment] = ACTIONS(261),
  },
  [82] = {
    [aux_sym_section_repeat1] = STATE(93),
    [sym_text_group] = STATE(87),
    [sym_m_whitespace] = ACTIONS(263),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(241),
  },
  [83] = {
    [aux_sym_section_repeat1] = STATE(85),
    [sym_text_group] = STATE(87),
    [sym_m_whitespace] = ACTIONS(236),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_magic_comment] = ACTIONS(241),
  },
  [84] = {
    [aux_sym_section_repeat1] = STATE(93),
    [sym_text_group] = STATE(87),
    [sym_magic_comment] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(265),
    [sym_text] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(263),
    [sym_end_group] = ACTIONS(241),
  },
  [85] = {
    [aux_sym_section_repeat1] = STATE(85),
    [sym_m_whitespace] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_end_group] = ACTIONS(192),
    [sym_magic_comment] = ACTIONS(192),
  },
  [86] = {
    [aux_sym_section_repeat1] = STATE(75),
    [sym_text_group] = STATE(95),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(190),
    [sym_magic_comment] = ACTIONS(270),
  },
  [87] = {
    [sym_begin_group] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(270),
    [sym_magic_comment] = ACTIONS(270),
  },
  [88] = {
    [aux_sym_section_repeat1] = STATE(96),
    [sym_text_group] = STATE(95),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(272),
    [sym_magic_comment] = ACTIONS(270),
  },
  [89] = {
    [aux_sym_section_repeat1] = STATE(97),
    [sym_text_group] = STATE(87),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_m_whitespace] = ACTIONS(274),
    [sym_magic_comment] = ACTIONS(241),
  },
  [90] = {
    [aux_sym_section_repeat1] = STATE(92),
    [sym_text_group] = STATE(87),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_m_whitespace] = ACTIONS(256),
    [sym_magic_comment] = ACTIONS(241),
  },
  [91] = {
    [aux_sym_section_repeat1] = STATE(97),
    [sym_text_group] = STATE(87),
    [sym_begin_group] = ACTIONS(5),
    [sym_s_whitespace] = ACTIONS(276),
    [sym_text] = ACTIONS(241),
    [sym__escape_char] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(274),
    [sym_magic_comment] = ACTIONS(241),
  },
  [92] = {
    [aux_sym_section_repeat1] = STATE(92),
    [sym_begin_group] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(192),
    [sym__escape_char] = ACTIONS(192),
    [sym_m_whitespace] = ACTIONS(278),
    [sym_magic_comment] = ACTIONS(192),
  },
  [93] = {
    [aux_sym_section_repeat1] = STATE(85),
    [sym_text_group] = STATE(95),
    [sym_m_whitespace] = ACTIONS(236),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_end_group] = ACTIONS(270),
    [sym_magic_comment] = ACTIONS(270),
  },
  [94] = {
    [aux_sym_section_repeat1] = STATE(99),
    [sym_text_group] = STATE(95),
    [sym_m_whitespace] = ACTIONS(281),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_end_group] = ACTIONS(270),
    [sym_magic_comment] = ACTIONS(270),
  },
  [95] = {
    [sym_begin_group] = ACTIONS(283),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
    [sym__escape_char] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(283),
  },
  [96] = {
    [aux_sym_section_repeat1] = STATE(75),
    [sym_text_group] = STATE(100),
    [sym_begin_group] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_text] = ACTIONS(283),
    [sym__escape_char] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_m_whitespace] = ACTIONS(190),
    [sym_magic_comment] = ACTIONS(283),
  },
  [97] = {
    [aux_sym_section_repeat1] = STATE(92),
    [sym_text_group] = STATE(95),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_m_whitespace] = ACTIONS(256),
    [sym_magic_comment] = ACTIONS(270),
  },
  [98] = {
    [aux_sym_section_repeat1] = STATE(101),
    [sym_text_group] = STATE(95),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(270),
    [sym__escape_char] = ACTIONS(270),
    [sym_m_whitespace] = ACTIONS(285),
    [sym_magic_comment] = ACTIONS(270),
  },
  [99] = {
    [aux_sym_section_repeat1] = STATE(85),
    [sym_text_group] = STATE(100),
    [sym_m_whitespace] = ACTIONS(236),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(283),
    [sym__escape_char] = ACTIONS(283),
    [sym_end_group] = ACTIONS(283),
    [sym_magic_comment] = ACTIONS(283),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(287),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_text] = ACTIONS(287),
    [sym__escape_char] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [sym_end_group] = ACTIONS(287),
    [sym_magic_comment] = ACTIONS(287),
  },
  [101] = {
    [aux_sym_section_repeat1] = STATE(92),
    [sym_text_group] = STATE(100),
    [sym_begin_group] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(283),
    [sym__escape_char] = ACTIONS(283),
    [sym_m_whitespace] = ACTIONS(256),
    [sym_magic_comment] = ACTIONS(283),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(12),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = false}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, SHIFT(14),
  [23] = {.count = 1, .reusable = false}, SHIFT(15),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, SHIFT(24),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(25),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(28),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_control_symbol, 2),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = true}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_control_word, 2, .alias_sequence_id = 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_begin_command, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__control_sequence, 2),
  [71] = {.count = 1, .reusable = false}, SHIFT(35),
  [73] = {.count = 1, .reusable = false}, SHIFT(36),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_env_body, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_environment, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(40),
  [87] = {.count = 1, .reusable = true}, SHIFT(45),
  [89] = {.count = 1, .reusable = true}, SHIFT(43),
  [91] = {.count = 1, .reusable = false}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(26),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.count = 1, .reusable = true}, SHIFT(49),
  [108] = {.count = 1, .reusable = true}, SHIFT(48),
  [110] = {.count = 1, .reusable = true}, SHIFT(47),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(29),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(9),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim, 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(50),
  [126] = {.count = 1, .reusable = true}, SHIFT(51),
  [128] = {.count = 1, .reusable = true}, SHIFT(53),
  [130] = {.count = 1, .reusable = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = true}, SHIFT(55),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_end_command, 2),
  [136] = {.count = 1, .reusable = true}, SHIFT(57),
  [138] = {.count = 1, .reusable = true}, SHIFT(56),
  [140] = {.count = 1, .reusable = true}, SHIFT(58),
  [142] = {.count = 1, .reusable = true}, SHIFT(35),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_environment, 3),
  [146] = {.count = 1, .reusable = true}, SHIFT(59),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(41),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym__text_mode_repeat1, 2), SHIFT_REPEAT(40),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_shift, 1),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_shift, 1),
  [158] = {.count = 1, .reusable = false}, SHIFT(61),
  [160] = {.count = 1, .reusable = true}, SHIFT(62),
  [162] = {.count = 1, .reusable = true}, SHIFT(63),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 3),
  [166] = {.count = 1, .reusable = true}, SHIFT(64),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym__simple_group_mode, 1),
  [170] = {.count = 1, .reusable = true}, SHIFT(65),
  [172] = {.count = 1, .reusable = true}, SHIFT(66),
  [174] = {.count = 1, .reusable = true}, SHIFT(67),
  [176] = {.count = 1, .reusable = true}, SHIFT(68),
  [178] = {.count = 1, .reusable = true}, SHIFT(69),
  [180] = {.count = 1, .reusable = true}, SHIFT(70),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [184] = {.count = 1, .reusable = true}, SHIFT(71),
  [186] = {.count = 1, .reusable = true}, SHIFT(72),
  [188] = {.count = 1, .reusable = true}, SHIFT(74),
  [190] = {.count = 1, .reusable = true}, SHIFT(75),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(55),
  [197] = {.count = 1, .reusable = true}, SHIFT(76),
  [199] = {.count = 1, .reusable = true}, SHIFT(77),
  [201] = {.count = 1, .reusable = true}, SHIFT(78),
  [203] = {.count = 1, .reusable = true}, SHIFT(79),
  [205] = {.count = 1, .reusable = true}, SHIFT(80),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 3),
  [209] = {.count = 1, .reusable = true}, SHIFT(81),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_control_symbol, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_control_word, 2, .alias_sequence_id = 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__control_sequence, 2),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym__simple_group_mode_repeat1, 2), SHIFT_REPEAT(42),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym__simple_group_mode_repeat1, 2), SHIFT_REPEAT(43),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym__simple_group_mode_repeat1, 2), SHIFT_REPEAT(64),
  [226] = {.count = 1, .reusable = true}, REDUCE(aux_sym__simple_group_mode_repeat1, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 4),
  [230] = {.count = 1, .reusable = true}, SHIFT(82),
  [232] = {.count = 1, .reusable = true}, SHIFT(83),
  [234] = {.count = 1, .reusable = true}, SHIFT(84),
  [236] = {.count = 1, .reusable = true}, SHIFT(85),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(70),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [243] = {.count = 1, .reusable = true}, SHIFT(86),
  [245] = {.count = 1, .reusable = true}, SHIFT(88),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(75),
  [250] = {.count = 1, .reusable = true}, SHIFT(89),
  [252] = {.count = 1, .reusable = true}, SHIFT(90),
  [254] = {.count = 1, .reusable = true}, SHIFT(91),
  [256] = {.count = 1, .reusable = true}, SHIFT(92),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(80),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 4),
  [263] = {.count = 1, .reusable = true}, SHIFT(93),
  [265] = {.count = 1, .reusable = true}, SHIFT(94),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(85),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [272] = {.count = 1, .reusable = true}, SHIFT(96),
  [274] = {.count = 1, .reusable = true}, SHIFT(97),
  [276] = {.count = 1, .reusable = true}, SHIFT(98),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(92),
  [281] = {.count = 1, .reusable = true}, SHIFT(99),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7),
  [285] = {.count = 1, .reusable = true}, SHIFT(101),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8),
};

void *tree_sitter_latex_external_scanner_create();
void tree_sitter_latex_external_scanner_destroy(void *);
bool tree_sitter_latex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_latex_external_scanner_serialize(void *, char *);
void tree_sitter_latex_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_latex_external_scanner_create,
      tree_sitter_latex_external_scanner_destroy,
      tree_sitter_latex_external_scanner_scan,
      tree_sitter_latex_external_scanner_serialize,
      tree_sitter_latex_external_scanner_deserialize,
    },
  };
  return &language;
}
