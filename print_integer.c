#include "main.h"

/**
 * myprintf_i - prints int
 * @ptr:print the  argument
 * Return: number
 */
int myprintf_i(va_list ptr)
{
	int ar = va_arg(ptr, int);
	int m, l = n % 10, d, e = 1;
	int  i = 1;

	ar = ar / 10;
	m = ar;

	if (l < 0)
	{
		_putchar('-');
		m = -m;
		ar = -ar;
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
		m = ar;
		while (e > 0)
		{
			d = m / p;
			_putchar(d + '0');
			m = m - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');

	return (i);
}

/**
 * myprintf_d - prints d
 * @ptr: print the argument
 * Return: numbers
 */

int myprintf_d(va_list ptr)
{
	int ar = va_arg(ptr, int);
	int m, l = n % 10, d, e = 1;
	int  i = 1;

	ar = ar / 10;
	m = ar;

	if (l < 0)
	{
		_putchar('-');
		m = -m;
		ar = -ar;
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
		m = ar;
		while (e > 0)
		{
			d = m / p;
			_putchar(d + '0');
			m = m - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');

	return (i);
}
