#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

#include "tree_sitter/parser.h"


namespace {

using std::vector;
using std::string;

enum TokenType {
  START_ENV_NAME,
  END_ENV_NAME
};

struct Scanner {
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

  bool scan(TSLexer *lexer, const bool *valid_symbols)
  {
    return true;
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
