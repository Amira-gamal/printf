#include "main.h"

/**
 * myprintf_i - prints int and d
 * @ptr:print the  argument
 * Return: number
 */
int myprintf_int(va_list ptr)
{
	int x = va_arg(ptr, int);
	int m, l = x % 10, d, e = 1;
	int  i = 1;

	x = x / 10;
	m = x;

	if (l < 0)
	{
		_putchar('-');
		m = -m;
		x = -x;
		l = -l;
		i++;
	}
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			e = e * 10;
			m = m / 10;
		}
		m = x;
		while (e > 0)
		{
			d = m / e;
			_putchar(d + '0');
			m = m - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');

	return (i);
}
