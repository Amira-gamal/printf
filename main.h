#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _cformat(va_list ptr);
int _sformat(va_list ptr);
int myprintf_int(va_list ptr);

#endif

