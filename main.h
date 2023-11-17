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
<<<<<<< HEAD
int _uforamte(va_list ptr);
int _oformat(unsigned int m, int p);
int _xformat(unsigned int m, int p, int upper);
=======
int _NonSformat(va_list ptr);
int Hexa(int num);
int _oformat(va_list ptr);
int _uformat(va_list ptr);
int hexaLetters(int n, char c);
int _hformat(va_list ptr, char c);
int _pformat(va_list ptr);
>>>>>>> 216a249e735bfcd07fb3ea0b9e6c442bec0a0d7f

#endif
