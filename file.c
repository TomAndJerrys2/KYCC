// KYCC Source File - Under MIT License 2025
//
// This module generates the input stream for the source code generation /
// either by being passed a file ptr or a relative string
//

#include "kycc.h"

static Vector* files = &EMPTY_VECTOR
