#include "main.h"

/**
 *
 * _cformat: format the passed char and print it to stdout
 *
 * Return: 1 (success) number of printed chars
 *
 */

int _cformat(va_list ptr)
{
	char c = va_arg(ptr, int);
	
	_putchar(c);

	return (1);
}
