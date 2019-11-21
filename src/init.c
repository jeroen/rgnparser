#include "add.h"
#include <R_ext/Rdynload.h>

void R_init_rgnparser(DllInfo *info) {
  R_RegisterCCallable("rgnparser", "add", (DL_FUNC) &add_);
}
