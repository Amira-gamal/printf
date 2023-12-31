#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int conversion(const char *format, va_list args);
int _cformat(va_list ptr);
int _sformat(va_list ptr);
int myprintf_int(va_list ptr);
int _bformat(va_list ptr);
int _oformat(unsigned int m, int p);
int _NonSformat(va_list ptr);
int Hexa(int num);
int _uformat(va_list ptr);
int hexaLetters(int n, char c);
int _hformat(va_list ptr, char c);
int _pformat(va_list ptr);
#endif
