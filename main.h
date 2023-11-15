#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char* format, ...);
int _cformat(va_list ptr);
int _sformat(va_list ptr);
int myprintf_i(va_list ptr);
int myprintf_d(va_list ptr);

#endif
