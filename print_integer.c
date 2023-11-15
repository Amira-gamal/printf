#include "main.h"

/**
 * myprintf_i - prints int
 * @args:print the  argument
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
		l= -l;
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
 * @args: print the argument
 * Return: numbers
 */

int myprintf_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
