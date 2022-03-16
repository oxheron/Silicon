#include "core/shell/oterm.h"

extern oterminal terminal;

int printf(const char* str, ...)
{
    va_list args;
    va_start(args, str);
    terminal.vaprintf(str, args);
    va_end(args);
    return 0;
}
