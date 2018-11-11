#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 45
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__start_env_name = 1,
  sym__end_env_name = 2,
  aux_sym_SLASH_BSLASHs_STAR_SLASH = 3,
  aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH = 4,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 5,
  sym_comment_text = 6,
  sym_escape_char = 7,
  sym_begin_group = 8,
  sym_end_group = 9,
  anon_sym_DOLLAR = 10,
  sym_alignment_tab = 11,
  sym__end_of_line = 12,
  sym_parameter_token = 13,
  sym_superscript = 14,
  sym_subscript = 15,
  sym_active_char = 16,
  sym_comment_char = 17,
  sym__whitespace = 18,
  anon_sym_DOLLAR_DOLLAR = 19,
  sym_symbol = 20,
  sym_letters = 21,
  sym_trailing_space = 22,
  sym_text = 23,
  anon_sym_begin = 24,
  anon_sym_end = 25,
  sym_program = 26,
  sym_comment = 27,
  sym_magic_comment = 28,
  sym_text_group = 29,
  sym__text_mode = 30,
  sym_control_sequence = 31,
  sym_control_symbol = 32,
  sym_control_word = 33,
  sym_environment = 34,
  sym_env_body = 35,
  sym_open_env = 36,
  sym_close_env = 37,
  aux_sym_program_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [sym__start_env_name] = "env_name",
  [sym__end_env_name] = "env_name",
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHs_STAR_SLASH] = "/\\s*/",
  [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = "/!T[eE]X/",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [sym_comment_text] = "comment_text",
  [sym_escape_char] = "escape_char",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [anon_sym_DOLLAR] = "$",
  [sym_alignment_tab] = "alignment_tab",
  [sym__end_of_line] = "_end_of_line",
  [sym_parameter_token] = "parameter_token",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym__whitespace] = "_whitespace",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [sym_symbol] = "symbol",
  [sym_letters] = "letters",
  [sym_trailing_space] = "trailing_space",
  [sym_text] = "text",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_magic_comment] = "magic_comment",
  [sym_text_group] = "text_group",
  [sym__text_mode] = "_text_mode",
  [sym_control_sequence] = "control_sequence",
  [sym_control_symbol] = "control_symbol",
  [sym_control_word] = "control_word",
  [sym_environment] = "environment",
  [sym_env_body] = "env_body",
  [sym_open_env] = "open_env",
  [sym_close_env] = "close_env",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__start_env_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_env_name] = {
    .visible = true,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHs_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_char] = {
    .visible = true,
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
  [sym_comment_char] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_letters] = {
    .visible = true,
    .named = true,
  },
  [sym_trailing_space] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
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
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_control_sequence] = {
    .visible = true,
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
  [sym_close_env] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '&')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '^')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
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
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'T')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'X')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_parameter_token);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_escape_char);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'g')
        ADVANCE(18);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'i')
        ADVANCE(19);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'n')
        ADVANCE(20);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_letters);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'n')
        ADVANCE(23);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'd')
        ADVANCE(24);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_end);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 28:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '%')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(38);
      ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment_char);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment_text);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_char);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_begin_group);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n')
        ADVANCE(43);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(30);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_trailing_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_end_group);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'e')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'd')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(29);
      if (lookahead == '%')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(58);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(38);
      ADVANCE(42);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 28, .external_lex_state = 2},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 28, .external_lex_state = 2},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 44, .external_lex_state = 3},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 44, .external_lex_state = 3},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
};

enum {
  ts_external_token__start_env_name,
  ts_external_token__end_env_name,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_env_name] = sym__start_env_name,
  [ts_external_token__end_env_name] = sym__end_env_name,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_env_name] = true,
    [ts_external_token__end_env_name] = true,
  },
  [2] = {
    [ts_external_token__start_env_name] = true,
  },
  [3] = {
    [ts_external_token__end_env_name] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__start_env_name] = ACTIONS(1),
    [sym__end_env_name] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_STAR_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(3),
    [sym_escape_char] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [sym_alignment_tab] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(3),
    [sym_parameter_token] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_letters] = ACTIONS(3),
    [sym_trailing_space] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_comment] = STATE(8),
    [sym_text_group] = STATE(8),
    [sym__text_mode] = STATE(8),
    [sym_control_sequence] = STATE(8),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_environment] = STATE(8),
    [sym_open_env] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_comment_char] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
  [2] = {
    [sym__whitespace] = ACTIONS(13),
    [sym_symbol] = ACTIONS(17),
    [sym_letters] = ACTIONS(19),
    [anon_sym_begin] = ACTIONS(21),
  },
  [3] = {
    [sym_comment] = STATE(14),
    [sym_text_group] = STATE(14),
    [sym__text_mode] = STATE(14),
    [sym_control_sequence] = STATE(14),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_environment] = STATE(14),
    [sym_open_env] = STATE(7),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(23),
    [sym_comment_char] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(27),
  },
  [4] = {
    [sym_magic_comment] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_BSLASHs_STAR_SLASH] = ACTIONS(31),
    [sym_comment_text] = ACTIONS(33),
    [sym_escape_char] = ACTIONS(35),
    [sym_begin_group] = ACTIONS(35),
    [sym_comment_char] = ACTIONS(35),
    [sym__whitespace] = ACTIONS(37),
    [sym_text] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__whitespace] = ACTIONS(13),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_escape_char] = ACTIONS(41),
    [sym_begin_group] = ACTIONS(41),
    [sym_end_group] = ACTIONS(41),
    [sym_comment_char] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(41),
  },
  [7] = {
    [sym_comment] = STATE(17),
    [sym_text_group] = STATE(17),
    [sym__text_mode] = STATE(17),
    [sym_control_sequence] = STATE(17),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_environment] = STATE(17),
    [sym_env_body] = STATE(18),
    [sym_open_env] = STATE(7),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_comment_char] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(43),
  },
  [8] = {
    [sym_comment] = STATE(19),
    [sym_text_group] = STATE(19),
    [sym__text_mode] = STATE(19),
    [sym_control_sequence] = STATE(19),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_environment] = STATE(19),
    [sym_open_env] = STATE(7),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_comment_char] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_escape_char] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(49),
    [sym_end_group] = ACTIONS(49),
    [sym_comment_char] = ACTIONS(49),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(49),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_escape_char] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(51),
    [sym_end_group] = ACTIONS(51),
    [sym_comment_char] = ACTIONS(51),
    [sym__whitespace] = ACTIONS(37),
    [sym_trailing_space] = ACTIONS(53),
    [sym_text] = ACTIONS(51),
  },
  [11] = {
    [sym_begin_group] = ACTIONS(55),
    [sym__whitespace] = ACTIONS(57),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_escape_char] = ACTIONS(60),
    [sym_begin_group] = ACTIONS(60),
    [sym_end_group] = ACTIONS(60),
    [sym_comment_char] = ACTIONS(60),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(60),
  },
  [13] = {
    [sym_magic_comment] = STATE(16),
    [aux_sym_SLASH_BSLASHs_STAR_SLASH] = ACTIONS(62),
    [sym_comment_text] = ACTIONS(33),
    [sym_escape_char] = ACTIONS(35),
    [sym_end_group] = ACTIONS(35),
    [sym__whitespace] = ACTIONS(37),
  },
  [14] = {
    [sym_end_group] = ACTIONS(64),
    [sym__whitespace] = ACTIONS(13),
  },
  [15] = {
    [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = ACTIONS(66),
    [sym__whitespace] = ACTIONS(13),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_escape_char] = ACTIONS(68),
    [sym_begin_group] = ACTIONS(68),
    [sym_end_group] = ACTIONS(68),
    [sym_comment_char] = ACTIONS(68),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(68),
  },
  [17] = {
    [sym_escape_char] = ACTIONS(70),
    [sym__whitespace] = ACTIONS(13),
  },
  [18] = {
    [sym_close_env] = STATE(27),
    [sym_escape_char] = ACTIONS(72),
    [sym__whitespace] = ACTIONS(13),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [sym_text_group] = STATE(19),
    [sym__text_mode] = STATE(19),
    [sym_control_sequence] = STATE(19),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_environment] = STATE(19),
    [sym_open_env] = STATE(7),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_escape_char] = ACTIONS(76),
    [sym_begin_group] = ACTIONS(79),
    [sym_comment_char] = ACTIONS(82),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(85),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_escape_char] = ACTIONS(88),
    [sym_begin_group] = ACTIONS(88),
    [sym_end_group] = ACTIONS(88),
    [sym_comment_char] = ACTIONS(88),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(88),
  },
  [21] = {
    [sym__start_env_name] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(13),
  },
  [22] = {
    [sym_begin_group] = ACTIONS(92),
    [sym__whitespace] = ACTIONS(13),
  },
  [23] = {
    [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = ACTIONS(94),
    [sym__whitespace] = ACTIONS(13),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_escape_char] = ACTIONS(96),
    [sym_begin_group] = ACTIONS(96),
    [sym_end_group] = ACTIONS(96),
    [sym_comment_char] = ACTIONS(96),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(96),
  },
  [25] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(98),
    [sym__whitespace] = ACTIONS(37),
  },
  [26] = {
    [sym__whitespace] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(100),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_escape_char] = ACTIONS(102),
    [sym_begin_group] = ACTIONS(102),
    [sym_end_group] = ACTIONS(102),
    [sym_comment_char] = ACTIONS(102),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(102),
  },
  [28] = {
    [sym_end_group] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(13),
  },
  [29] = {
    [sym__start_env_name] = ACTIONS(106),
    [sym__whitespace] = ACTIONS(13),
  },
  [30] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(108),
    [sym__whitespace] = ACTIONS(37),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment_text] = ACTIONS(112),
    [sym_escape_char] = ACTIONS(114),
    [sym_begin_group] = ACTIONS(114),
    [sym_comment_char] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(37),
    [sym_text] = ACTIONS(114),
  },
  [32] = {
    [sym_begin_group] = ACTIONS(116),
    [sym__whitespace] = ACTIONS(118),
  },
  [33] = {
    [sym_escape_char] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_comment_char] = ACTIONS(121),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(121),
  },
  [34] = {
    [sym_end_group] = ACTIONS(123),
    [sym__whitespace] = ACTIONS(13),
  },
  [35] = {
    [sym_comment_text] = ACTIONS(125),
    [sym_escape_char] = ACTIONS(114),
    [sym_end_group] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(37),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_escape_char] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(127),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(127),
  },
  [37] = {
    [sym__end_env_name] = ACTIONS(129),
    [sym__whitespace] = ACTIONS(13),
  },
  [38] = {
    [sym_begin_group] = ACTIONS(131),
    [sym__whitespace] = ACTIONS(13),
  },
  [39] = {
    [sym_escape_char] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_comment_char] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(133),
  },
  [40] = {
    [sym_end_group] = ACTIONS(135),
    [sym__whitespace] = ACTIONS(13),
  },
  [41] = {
    [sym__end_env_name] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(13),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_escape_char] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_end_group] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(139),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(139),
  },
  [43] = {
    [sym_end_group] = ACTIONS(141),
    [sym__whitespace] = ACTIONS(13),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_escape_char] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_end_group] = ACTIONS(143),
    [sym_comment_char] = ACTIONS(143),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(143),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(15),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [37] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_control_sequence, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(17),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(19),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_control_symbol, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_control_word, 2),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 2, .reusable = true}, SHIFT(22), SHIFT_EXTRA(),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [62] = {.count = 1, .reusable = false}, SHIFT(23),
  [64] = {.count = 1, .reusable = true}, SHIFT(24),
  [66] = {.count = 1, .reusable = true}, SHIFT(25),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_env_body, 1),
  [72] = {.count = 1, .reusable = true}, SHIFT(26),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_control_word, 3),
  [90] = {.count = 1, .reusable = true}, SHIFT(28),
  [92] = {.count = 1, .reusable = true}, SHIFT(29),
  [94] = {.count = 1, .reusable = true}, SHIFT(30),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(31),
  [100] = {.count = 1, .reusable = true}, SHIFT(32),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_environment, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(33),
  [106] = {.count = 1, .reusable = true}, SHIFT(34),
  [108] = {.count = 1, .reusable = true}, SHIFT(35),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_magic_comment, 3),
  [112] = {.count = 1, .reusable = false}, SHIFT(36),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_magic_comment, 3),
  [116] = {.count = 1, .reusable = true}, SHIFT(37),
  [118] = {.count = 2, .reusable = true}, SHIFT(38), SHIFT_EXTRA(),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 5),
  [123] = {.count = 1, .reusable = true}, SHIFT(39),
  [125] = {.count = 1, .reusable = true}, SHIFT(36),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_magic_comment, 4),
  [129] = {.count = 1, .reusable = true}, SHIFT(40),
  [131] = {.count = 1, .reusable = true}, SHIFT(41),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 6),
  [135] = {.count = 1, .reusable = true}, SHIFT(42),
  [137] = {.count = 1, .reusable = true}, SHIFT(43),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 5),
  [141] = {.count = 1, .reusable = true}, SHIFT(44),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 6),
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
