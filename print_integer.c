#include "main.h"

/**
 * myprintf_i - prints int
 * @ptr:print the  argument
 * Return: number
 */
int myprintf_i(va_list ptr)
{
	int x = va_arg(ptr, int);
	int count = 0;
	int m, d, e = 1;

	if (x < 0)
	{
		_putchar('-');
		count++;
		x = -x;
	}
	m = x;
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			e *= 10;
			m /= 10;
		}
		m = x;
		while (e > 0)
		{
			d = m / e;
			_putchar(d + '0');
			m -= d * e;
			e /= 10;
			count++;
		}
	}
	_putchar(x % 10 + '0');
	count++;
	return (count);
}
/**
 * myprintf_d - prints d
 * @ptr: print the argument
 * Return: numbers
 */

int myprintf_d(va_list ptr)
{
	int x = va_arg(ptr, int);
	int count = 0;
	int m, d, e = 1;

	if (x < 0)
	{
		_putchar('-');
		count++;
		x = -x;
	}
	m = x;
	if (m > 0)
	{
		while (m / 10 != 0)
		{
			e *= 10;
			m /= 10;
		}
		m = x;
		while (e > 0)
		{
			d = m / e;
			_putchar(d + '0');
			m -= d * e;
			e /= 10;
			count++;
		}
	}
	_putchar(x % 10 + '0');
	count++;
	return (count);
}
