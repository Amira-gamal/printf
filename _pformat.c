#include "main.h"

/**
 * _pformat - print pointed memory address
 * @ptr: pointer to decimal value of memory address
 * Return: printing of address
 */

int _pformat(va_list ptr)
{
	int count = 2;
	char c = 'x';

	_putchar('0');
	_putchar('x');

	count += _hformat(ptr, c);

	return (count);
}
