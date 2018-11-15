#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include <iostream>

#include "tree_sitter/parser.h"
#include "env.h"


namespace {

using std::vector;
using std::string;

enum TokenType {
  START_ENV_NAME,
  END_ENV_NAME,
  ERRONEOUS_END_ENV_NAME,
  VERBATIM
};

struct Scanner {
  vector<Env> environments;

  bool has_command;

  Scanner() {}

  void destroy()
  {

  }

  unsigned serialize(char *buffer)
  {
    int i = 9;
    return i;
  }

  void deserialize(const char *buffer, unsigned length)
  {

  }


  /**
   * Grabs the environment's name, with some modifications:
   *  - Comments, and all characters following up to and including
   *    a newline are ignored
   *  - Consecutive spaces are normalised to single width
   *  - Braces are balanced, but not added to the name
   *  - Every backslash and the character following it is added
   *
   * These changes are intended to reflect how LaTeX sees the name.
   * Naturally, we can't account for what any control sequences expand
   * to, but this method is a good balance of accuracy and speed.
   *
   * @param  lexer The interface with the text
   * @return       A string containing the environment name
   */
  string scan_env_name(TSLexer *lexer)
  {
    // TODO: Apply scopes to the found commands and comments too
    string env_name;
    has_command = false;
    int nest_level = 0;
    while (lexer->lookahead)
    {
      // std::cout << "reading " << string(1, lexer->lookahead) << "\n";
      switch (lexer->lookahead)
      {
        case '\\':
          has_command = true;
          env_name += '\\';
          lexer->advance(lexer, false); // TODO: Does this cause error at end of file?
          env_name += lexer->lookahead; // TODO: Account for spaces here?
          lexer->advance(lexer, false);
          break;
        case '%':
          while (lexer->lookahead != '\n') lexer->advance(lexer, false);
          while (lexer->lookahead == ' ') lexer->advance(lexer, false);
          break;
        case ' ':
        case '\n':
          env_name += ' ';
          lexer->advance(lexer, false);
          while (lexer->lookahead == ' ') lexer->advance(lexer, false);
          break;
        case '{':
          nest_level += 1;
          lexer->advance(lexer, false);
          break;
        case '}':
          if (nest_level == 0)
          {
            // std::cout << "detected: " << env_name << "\n";
            return env_name;
          }
          lexer->advance(lexer, false);
          nest_level -= 1;
          break;
        default:
          env_name += lexer->lookahead;
          lexer->advance(lexer, false);
      }
    }

    return NULL_NAME;
  }

  bool scan_start_env_name(TSLexer *lexer)
  {
    string name = scan_env_name(lexer);

    Env env = Env::for_name(name, has_command);

    environments.push_back(env);

    lexer->result_symbol = START_ENV_NAME;

    return true;
  }

  bool scan_end_env_name(TSLexer *lexer)
  {
    string name = scan_env_name(lexer);
    
    Env env = Env::for_name(name, has_command);

    if (!environments.empty() && environments.back() == env) {
      environments.pop_back();
      lexer->result_symbol = END_ENV_NAME;
    } else {
      lexer->result_symbol = ERRONEOUS_END_ENV_NAME;
    }

    return true;
  }

  bool scan_verbatim(TSLexer *lexer)
  {
    while (lexer->lookahead == ' ') lexer->advance(lexer, false);

    char start_delim;
    switch (lexer->lookahead)
    {
      case '\n':
      case '\0':
        return false;
      default:
        start_delim = lexer->lookahead;
        lexer->advance(lexer, false);
    }

    while (lexer->lookahead)
    {
      if (lexer->lookahead == start_delim || lexer->lookahead == '\n') break;
      lexer->advance(lexer, false);
    }

    lexer->result_symbol = VERBATIM;
    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    // std::cout << "scanning";

    if (valid_symbols[START_ENV_NAME])
    {
      // std::cout << " for start env name" << "\n";
      return scan_start_env_name(lexer);
    }

    if (valid_symbols[END_ENV_NAME])
    {
      // std::cout << " for end env name" << "\n";
      return scan_end_env_name(lexer);
    }

    if (valid_symbols[VERBATIM])
    {
      // std::cout << " for verbatim" << "\n";
      return scan_verbatim(lexer);
    }

    return false;
  }

};

}


// Source for required functions:
// https://github.com/tree-sitter/tree-sitter/blob/78b54810a62580537b0a2df7eb781e03667d63ba/src/compiler/generate_code/c_code.cc#L546-L552

extern "C" {

void *tree_sitter_latex_external_scanner_create()
{
  return new Scanner();
}

bool tree_sitter_latex_external_scanner_scan(
  void *payload, TSLexer *lexer, const bool *valid_symbols
)
{
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_latex_external_scanner_serialize(void *payload, char *buffer)
{
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_latex_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
{
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_latex_external_scanner_destroy(void *payload)
{
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->destroy();
  delete scanner;
}

}
