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
	unsigned char c = va_arg(ptr, int);

	write(1, &c, 1);

	return (1);
}

