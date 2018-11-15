#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__start_env_name = 1,
  sym__end_env_name = 2,
  sym__erroneous_end_env_name = 3,
  sym__verb = 4,
  aux_sym_SLASH_BSLASHs_STAR_SLASH = 5,
  aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH = 6,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 7,
  sym_comment_text = 8,
  sym_escape_char = 9,
  sym_begin_group = 10,
  sym_end_group = 11,
  anon_sym_DOLLAR = 12,
  sym_alignment_tab = 13,
  sym__end_of_line = 14,
  sym_parameter_token = 15,
  sym_superscript = 16,
  sym_subscript = 17,
  sym_active_char = 18,
  sym_comment_char = 19,
  sym__whitespace = 20,
  anon_sym_DOLLAR_DOLLAR = 21,
  sym_symbol = 22,
  sym_letters = 23,
  sym_trailing_space = 24,
  anon_sym_verb = 25,
  sym_text = 26,
  anon_sym_begin = 27,
  anon_sym_end = 28,
  sym_program = 29,
  sym_comment = 30,
  sym_magic_comment = 31,
  sym__text_mode = 32,
  sym_text_group = 33,
  sym_control_sequence = 34,
  sym_control_symbol = 35,
  sym_control_word = 36,
  sym_verbatim = 37,
  sym_environment = 38,
  sym_env_body = 39,
  sym_open_env = 40,
  sym_begin_command = 41,
  sym_close_env = 42,
  sym_end_command = 43,
  aux_sym_program_repeat1 = 44,
};

static const char *ts_symbol_names[] = {
  [sym__start_env_name] = "env_name",
  [sym__end_env_name] = "env_name",
  [sym__erroneous_end_env_name] = "_erroneous_end_env_name",
  [sym__verb] = "_verb",
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
  [anon_sym_verb] = "verb",
  [sym_text] = "text",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_magic_comment] = "magic_comment",
  [sym__text_mode] = "_text_mode",
  [sym_text_group] = "text_group",
  [sym_control_sequence] = "control_sequence",
  [sym_control_symbol] = "control_symbol",
  [sym_control_word] = "control_word",
  [sym_verbatim] = "verbatim",
  [sym_environment] = "environment",
  [sym_env_body] = "env_body",
  [sym_open_env] = "open_env",
  [sym_begin_command] = "begin_command",
  [sym_close_env] = "close_env",
  [sym_end_command] = "end_command",
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
  [sym__erroneous_end_env_name] = {
    .visible = false,
    .named = true,
  },
  [sym__verb] = {
    .visible = false,
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
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
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
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
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
      if (lookahead == 'v')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(31);
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
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'e')
        ADVANCE(26);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'r')
        ADVANCE(27);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_letters);
      if (lookahead == 'b')
        ADVANCE(28);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_verb);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'v')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(34);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(42);
      ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment_char);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment_text);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_char);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_begin_group);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n')
        ADVANCE(47);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(50);
      if ((lookahead < '#' || lookahead > '&') &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_trailing_space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_end_group);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'e')
        ADVANCE(22);
      if (lookahead == 'v')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '%')
        ADVANCE(40);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(59);
      if (('#' <= lookahead && lookahead <= '&') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '}' ||
          lookahead == '~')
        ADVANCE(42);
      ADVANCE(46);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 32, .external_lex_state = 2},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32, .external_lex_state = 3},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 32, .external_lex_state = 2},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 56},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 48, .external_lex_state = 4},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 32, .external_lex_state = 3},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 48, .external_lex_state = 4},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 60},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 37},
};

enum {
  ts_external_token__start_env_name,
  ts_external_token__end_env_name,
  ts_external_token__erroneous_end_env_name,
  ts_external_token__verb,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_env_name] = sym__start_env_name,
  [ts_external_token__end_env_name] = sym__end_env_name,
  [ts_external_token__erroneous_end_env_name] = sym__erroneous_end_env_name,
  [ts_external_token__verb] = sym__verb,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_env_name] = true,
    [ts_external_token__end_env_name] = true,
    [ts_external_token__erroneous_end_env_name] = true,
    [ts_external_token__verb] = true,
  },
  [2] = {
    [ts_external_token__verb] = true,
  },
  [3] = {
    [ts_external_token__start_env_name] = true,
  },
  [4] = {
    [ts_external_token__end_env_name] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__start_env_name] = ACTIONS(1),
    [sym__end_env_name] = ACTIONS(1),
    [sym__erroneous_end_env_name] = ACTIONS(1),
    [sym__verb] = ACTIONS(1),
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
    [anon_sym_verb] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_comment] = STATE(9),
    [sym__text_mode] = STATE(9),
    [sym_text_group] = STATE(9),
    [sym_control_sequence] = STATE(9),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_verbatim] = STATE(9),
    [sym_environment] = STATE(9),
    [sym_open_env] = STATE(7),
    [sym_begin_command] = STATE(8),
    [aux_sym_program_repeat1] = STATE(9),
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
    [anon_sym_verb] = ACTIONS(21),
    [anon_sym_begin] = ACTIONS(23),
  },
  [3] = {
    [sym_comment] = STATE(16),
    [sym__text_mode] = STATE(16),
    [sym_text_group] = STATE(16),
    [sym_control_sequence] = STATE(16),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_verbatim] = STATE(16),
    [sym_environment] = STATE(16),
    [sym_open_env] = STATE(7),
    [sym_begin_command] = STATE(8),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(25),
    [sym_comment_char] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(29),
  },
  [4] = {
    [sym_magic_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_SLASH_BSLASHs_STAR_SLASH] = ACTIONS(33),
    [sym_comment_text] = ACTIONS(35),
    [sym_escape_char] = ACTIONS(37),
    [sym_begin_group] = ACTIONS(37),
    [sym_comment_char] = ACTIONS(37),
    [sym__whitespace] = ACTIONS(39),
    [sym_text] = ACTIONS(37),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__whitespace] = ACTIONS(13),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_escape_char] = ACTIONS(43),
    [sym_begin_group] = ACTIONS(43),
    [sym_end_group] = ACTIONS(43),
    [sym_comment_char] = ACTIONS(43),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(43),
  },
  [7] = {
    [sym_comment] = STATE(20),
    [sym__text_mode] = STATE(20),
    [sym_text_group] = STATE(20),
    [sym_control_sequence] = STATE(20),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_verbatim] = STATE(20),
    [sym_environment] = STATE(20),
    [sym_env_body] = STATE(21),
    [sym_open_env] = STATE(7),
    [sym_begin_command] = STATE(8),
    [sym_close_env] = STATE(22),
    [sym_end_command] = STATE(23),
    [sym_escape_char] = ACTIONS(45),
    [sym_begin_group] = ACTIONS(9),
    [sym_comment_char] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(47),
  },
  [8] = {
    [sym_begin_group] = ACTIONS(49),
    [sym__whitespace] = ACTIONS(51),
  },
  [9] = {
    [sym_comment] = STATE(26),
    [sym__text_mode] = STATE(26),
    [sym_text_group] = STATE(26),
    [sym_control_sequence] = STATE(26),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_verbatim] = STATE(26),
    [sym_environment] = STATE(26),
    [sym_open_env] = STATE(7),
    [sym_begin_command] = STATE(8),
    [aux_sym_program_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_escape_char] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_comment_char] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(56),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_escape_char] = ACTIONS(58),
    [sym_begin_group] = ACTIONS(58),
    [sym_end_group] = ACTIONS(58),
    [sym_comment_char] = ACTIONS(58),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(58),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_escape_char] = ACTIONS(60),
    [sym_begin_group] = ACTIONS(60),
    [sym_end_group] = ACTIONS(60),
    [sym_comment_char] = ACTIONS(60),
    [sym__whitespace] = ACTIONS(39),
    [sym_trailing_space] = ACTIONS(62),
    [sym_text] = ACTIONS(60),
  },
  [12] = {
    [sym__verb] = ACTIONS(64),
    [sym__whitespace] = ACTIONS(66),
  },
  [13] = {
    [sym_begin_group] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(69),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_escape_char] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(71),
    [sym_end_group] = ACTIONS(71),
    [sym_comment_char] = ACTIONS(71),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(71),
  },
  [15] = {
    [sym_magic_comment] = STATE(18),
    [aux_sym_SLASH_BSLASHs_STAR_SLASH] = ACTIONS(73),
    [sym_comment_text] = ACTIONS(35),
    [sym_escape_char] = ACTIONS(37),
    [sym_end_group] = ACTIONS(37),
    [sym__whitespace] = ACTIONS(39),
  },
  [16] = {
    [sym_end_group] = ACTIONS(75),
    [sym__whitespace] = ACTIONS(13),
  },
  [17] = {
    [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = ACTIONS(77),
    [sym__whitespace] = ACTIONS(13),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_escape_char] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(79),
    [sym_end_group] = ACTIONS(79),
    [sym_comment_char] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(79),
  },
  [19] = {
    [sym__whitespace] = ACTIONS(13),
    [sym_symbol] = ACTIONS(17),
    [sym_letters] = ACTIONS(19),
    [anon_sym_verb] = ACTIONS(21),
    [anon_sym_begin] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(81),
  },
  [20] = {
    [sym_escape_char] = ACTIONS(83),
    [sym__whitespace] = ACTIONS(13),
  },
  [21] = {
    [sym_close_env] = STATE(35),
    [sym_end_command] = STATE(23),
    [sym_escape_char] = ACTIONS(85),
    [sym__whitespace] = ACTIONS(13),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_escape_char] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(87),
    [sym_comment_char] = ACTIONS(87),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(87),
  },
  [23] = {
    [sym_begin_group] = ACTIONS(89),
    [sym__whitespace] = ACTIONS(91),
  },
  [24] = {
    [sym__start_env_name] = ACTIONS(94),
    [sym__whitespace] = ACTIONS(13),
  },
  [25] = {
    [sym_begin_group] = ACTIONS(96),
    [sym__whitespace] = ACTIONS(13),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [sym__text_mode] = STATE(26),
    [sym_text_group] = STATE(26),
    [sym_control_sequence] = STATE(26),
    [sym_control_symbol] = STATE(6),
    [sym_control_word] = STATE(6),
    [sym_verbatim] = STATE(26),
    [sym_environment] = STATE(26),
    [sym_open_env] = STATE(7),
    [sym_begin_command] = STATE(8),
    [aux_sym_program_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_escape_char] = ACTIONS(100),
    [sym_begin_group] = ACTIONS(103),
    [sym_comment_char] = ACTIONS(106),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(109),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_escape_char] = ACTIONS(112),
    [sym_begin_group] = ACTIONS(112),
    [sym_end_group] = ACTIONS(112),
    [sym_comment_char] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(112),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_escape_char] = ACTIONS(114),
    [sym_begin_group] = ACTIONS(114),
    [sym_end_group] = ACTIONS(114),
    [sym_comment_char] = ACTIONS(114),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(114),
  },
  [29] = {
    [sym__verb] = ACTIONS(116),
    [sym__whitespace] = ACTIONS(13),
  },
  [30] = {
    [aux_sym_SLASH_BANGT_LBRACKeE_RBRACKX_SLASH] = ACTIONS(118),
    [sym__whitespace] = ACTIONS(13),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_escape_char] = ACTIONS(120),
    [sym_begin_group] = ACTIONS(120),
    [sym_end_group] = ACTIONS(120),
    [sym_comment_char] = ACTIONS(120),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(120),
  },
  [32] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(122),
    [sym__whitespace] = ACTIONS(39),
  },
  [33] = {
    [sym_begin_group] = ACTIONS(124),
    [sym__whitespace] = ACTIONS(124),
  },
  [34] = {
    [sym__whitespace] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(126),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_escape_char] = ACTIONS(128),
    [sym_begin_group] = ACTIONS(128),
    [sym_end_group] = ACTIONS(128),
    [sym_comment_char] = ACTIONS(128),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(128),
  },
  [36] = {
    [sym__end_env_name] = ACTIONS(130),
    [sym__whitespace] = ACTIONS(13),
  },
  [37] = {
    [sym_begin_group] = ACTIONS(132),
    [sym__whitespace] = ACTIONS(13),
  },
  [38] = {
    [sym_end_group] = ACTIONS(134),
    [sym__whitespace] = ACTIONS(13),
  },
  [39] = {
    [sym__start_env_name] = ACTIONS(136),
    [sym__whitespace] = ACTIONS(13),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_escape_char] = ACTIONS(138),
    [sym_begin_group] = ACTIONS(138),
    [sym_end_group] = ACTIONS(138),
    [sym_comment_char] = ACTIONS(138),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(138),
  },
  [41] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(140),
    [sym__whitespace] = ACTIONS(39),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment_text] = ACTIONS(144),
    [sym_escape_char] = ACTIONS(146),
    [sym_begin_group] = ACTIONS(146),
    [sym_comment_char] = ACTIONS(146),
    [sym__whitespace] = ACTIONS(39),
    [sym_text] = ACTIONS(146),
  },
  [43] = {
    [sym_end_group] = ACTIONS(148),
    [sym__whitespace] = ACTIONS(13),
  },
  [44] = {
    [sym__end_env_name] = ACTIONS(150),
    [sym__whitespace] = ACTIONS(13),
  },
  [45] = {
    [sym_escape_char] = ACTIONS(152),
    [sym_begin_group] = ACTIONS(152),
    [sym_comment_char] = ACTIONS(152),
    [sym__whitespace] = ACTIONS(154),
    [sym_text] = ACTIONS(152),
  },
  [46] = {
    [sym_end_group] = ACTIONS(157),
    [sym__whitespace] = ACTIONS(13),
  },
  [47] = {
    [sym_comment_text] = ACTIONS(159),
    [sym_escape_char] = ACTIONS(146),
    [sym_end_group] = ACTIONS(146),
    [sym__whitespace] = ACTIONS(39),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_escape_char] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(161),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(161),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_escape_char] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_end_group] = ACTIONS(163),
    [sym_comment_char] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(165),
    [sym_text] = ACTIONS(163),
  },
  [50] = {
    [sym_end_group] = ACTIONS(168),
    [sym__whitespace] = ACTIONS(13),
  },
  [51] = {
    [sym_escape_char] = ACTIONS(170),
    [sym_begin_group] = ACTIONS(170),
    [sym_comment_char] = ACTIONS(170),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(170),
  },
  [52] = {
    [sym_escape_char] = ACTIONS(170),
    [sym_begin_group] = ACTIONS(170),
    [sym_comment_char] = ACTIONS(170),
    [sym__whitespace] = ACTIONS(172),
    [sym_text] = ACTIONS(170),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_escape_char] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_end_group] = ACTIONS(175),
    [sym_comment_char] = ACTIONS(175),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(175),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_escape_char] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_end_group] = ACTIONS(175),
    [sym_comment_char] = ACTIONS(175),
    [sym__whitespace] = ACTIONS(177),
    [sym_text] = ACTIONS(175),
  },
  [55] = {
    [sym_escape_char] = ACTIONS(180),
    [sym_begin_group] = ACTIONS(180),
    [sym_comment_char] = ACTIONS(180),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(180),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_escape_char] = ACTIONS(182),
    [sym_begin_group] = ACTIONS(182),
    [sym_end_group] = ACTIONS(182),
    [sym_comment_char] = ACTIONS(182),
    [sym__whitespace] = ACTIONS(13),
    [sym_text] = ACTIONS(182),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = false}, SHIFT(10),
  [19] = {.count = 1, .reusable = false}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = false}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [41] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_control_sequence, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 2, .reusable = true}, SHIFT(25), SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [56] = {.count = 1, .reusable = true}, SHIFT(26),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_control_symbol, 2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_control_word, 2),
  [62] = {.count = 1, .reusable = false}, SHIFT(27),
  [64] = {.count = 1, .reusable = true}, SHIFT(28),
  [66] = {.count = 2, .reusable = true}, SHIFT(29), SHIFT_EXTRA(),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_begin_command, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [73] = {.count = 1, .reusable = false}, SHIFT(30),
  [75] = {.count = 1, .reusable = true}, SHIFT(31),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(33),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_env_body, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(34),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_environment, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 2, .reusable = true}, SHIFT(37), SHIFT_EXTRA(),
  [94] = {.count = 1, .reusable = true}, SHIFT(38),
  [96] = {.count = 1, .reusable = true}, SHIFT(39),
  [98] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_control_word, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim, 3),
  [116] = {.count = 1, .reusable = true}, SHIFT(40),
  [118] = {.count = 1, .reusable = true}, SHIFT(41),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [122] = {.count = 1, .reusable = true}, SHIFT(42),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_end_command, 2),
  [126] = {.count = 1, .reusable = true}, SHIFT(33),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_environment, 3),
  [130] = {.count = 1, .reusable = true}, SHIFT(43),
  [132] = {.count = 1, .reusable = true}, SHIFT(44),
  [134] = {.count = 1, .reusable = true}, SHIFT(45),
  [136] = {.count = 1, .reusable = true}, SHIFT(46),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim, 4),
  [140] = {.count = 1, .reusable = true}, SHIFT(47),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_magic_comment, 3),
  [144] = {.count = 1, .reusable = false}, SHIFT(48),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_magic_comment, 3),
  [148] = {.count = 1, .reusable = true}, SHIFT(49),
  [150] = {.count = 1, .reusable = true}, SHIFT(50),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 4),
  [154] = {.count = 2, .reusable = true}, SHIFT(51), SHIFT_EXTRA(),
  [157] = {.count = 1, .reusable = true}, SHIFT(52),
  [159] = {.count = 1, .reusable = true}, SHIFT(48),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_magic_comment, 4),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 4),
  [165] = {.count = 2, .reusable = true}, SHIFT(53), SHIFT_EXTRA(),
  [168] = {.count = 1, .reusable = true}, SHIFT(54),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 5),
  [172] = {.count = 2, .reusable = true}, SHIFT(55), SHIFT_EXTRA(),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 5),
  [177] = {.count = 2, .reusable = true}, SHIFT(56), SHIFT_EXTRA(),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_open_env, 6),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_close_env, 6),
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
