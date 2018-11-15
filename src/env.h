#include <string>
#include <map>

#define NULL_NAME "\0"

using std::string;
using std::map;


// NOTE: Treat "document" as special and don't waste space on it here?
// The following are selected to balance frequency and size; we save more
// space at once by ID'ing a longer environment name, but can save more overall by
// Also need to consider which environments tend to get nested; e.g., bibliography
// environment will likely never be nested, so it's less important we condense it
enum EnvType {
  // Special
  CUSTOM, // unaccounted for plain name
  DOCUMENT, // document environment
  VOID,     // buffer overflow (unused?)
  EMPTY,    // empty name
  WILDCARD, // non-plain name

  // Common / fundamental environments
  FIGURE,
  TABLE,
  TABULAR,
  DESCRIPTION,
  ENUMERATE,
  ITEMIZE,
  QUOTATION,

  // Misc
  TIKZPICTURE,
  MINIPAGE,



  // Math
  EQUATION,
  ALIGN,
  GATHER,
  MULTILINE,
  SPLIT,
  BMATRIX,

  S_EQUATION,
  S_ALIGN,
  S_GATHER,
  S_MULTILINE,
  S_SPLIT,


  // Other
  TITLEPAGE,
  ABSTRACT,
  THEOREM,



};

static const map<string, EnvType> get_env_map() {
  map<string, EnvType> result;
#define ADD(name) result[#name] = name
#define ADDP(name, string) result[string] = name
  ADD(DOCUMENT);

  ADD(FIGURE);
  ADD(TABLE);
  ADD(TABULAR);
  ADD(DESCRIPTION);
  ADD(ENUMERATE);
  ADD(ITEMIZE);
  ADD(QUOTATION);
  ADD(TIKZPICTURE);
  ADD(MINIPAGE);
  ADD(EQUATION);
  ADD(ALIGN);
  ADD(GATHER);
  ADD(MULTILINE);
  ADD(SPLIT);
  ADD(BMATRIX);

  ADDP(S_EQUATION, "equation*");
  ADDP(S_ALIGN, "align*");
  ADDP(S_GATHER, "gather*");
  ADDP(S_MULTILINE, "multiline*");
  ADDP(S_SPLIT, "split*");

  ADD(TITLEPAGE);
  ADD(ABSTRACT);
  ADD(THEOREM);

#undef ADD
#undef ADDP
  return result;
}

static const map<string, EnvType> ENV_TYPES_BY_ENV_NAME = get_env_map();


struct Env {
  EnvType type;
  string custom_env_name;

  Env() : type(VOID) {}

  Env(EnvType type, const string &name) : type(type), custom_env_name(name) {}

  bool operator==(const Env &other) const {
    if (type == WILDCARD || other.type == WILDCARD) return true;
    if (type != other.type) return false;
    if (type == CUSTOM && custom_env_name != other.custom_env_name) return false;
    return true;
  }

  bool is_math() const {
    return false;
  }

  bool is_verbatim() const {
    return false;
  }

  bool is_comment() const {
    return false;
  }

  static inline Env for_name(const string &name, const bool has_command) {
    if (has_command) return Env(WILDCARD, name);

    if (name == NULL_NAME) return Env(EMPTY, name);

    map<string, EnvType>::const_iterator type = ENV_TYPES_BY_ENV_NAME.find(name);

    if (type != ENV_TYPES_BY_ENV_NAME.end()) {
      return Env(type->second, string());
    } else {
      return Env(CUSTOM, name);
    }
  }


};
