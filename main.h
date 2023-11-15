#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char c);
int _printf(const char* format, ...);
int _cformat(char c);
int myprintf_i(va_list ptr);
int myprintf_d(va_list ptr);

#endif
