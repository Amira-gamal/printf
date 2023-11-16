#include "main.h"

/**
 * _bformat - print decimal as binary
 * @ptr: pointer to decimal
 * Return: number of binary digit
 */
int _bformat(va_list ptr)
{
	unsigned int m = va_arg(ptr, unsigned int);
	unsigned int d;
	unsigned long e = 10;
	int  i = -1;

	while (m / 2 != 0)
	{
		e = (e + (m % 2)) * 10;
		m = m / 2;
	}
	e = e + (m % 2);

	while (e > 9)
	{
		d = e % 10;
		_putchar(d + '0');
		e = e / 10;
		i++;
	};

	return (i);
}
