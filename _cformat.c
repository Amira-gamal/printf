#include "main.h"

/**
 * _cformat - format the passed char and print it to stdout
 *
 * @ptr: pointer to va_list point to char
 *
 * Return: 1 (success) number of printed chars
 */

int _cformat(va_list ptr)
{
	int num = va_arg(ptr, int);
	
	if (num < 128);
		char c = num;
	else
		unsigned char c = num;

	_putchar(c);

	return (1);
}

