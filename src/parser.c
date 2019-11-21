#include <R.h>
#include <Rinternals.h>
#include "libgnparser.h"



char* gnparse_(char* str) {
  // char* out = PROTECT(allocVector(CHARSXP, 1));
  // STRSXP(result)[0] = ParseToString(str);
  char* out;
  char format[] = "simple";
  out = ParseToString(str, format);
  // SET_STRING_ELT(out, 0, ParseToString(str, format));
  UNPROTECT(1);
  
  return out;
}

