#include "main.h"

/**
 * myprintf_i - prints int
 * @ptr:print the  argument
 * Return: number
 */
int myprintf_i(va_list ptr)
{
	int x = va_arg(ptr, int);
	int num, last = x % 10, digit, exp = 1;
	int  i = 1;

	x = x / 10;
	num = x;

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
		num = x;
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
/**
 * myprintf_d - prints d
 * @ptr: print the argument
 * Return: numbers
 */

int myprintf_d(va_list ptr)
{
	int x = va_arg(ptr, int);
	int num, last = x % 10, digit, exp = 1;
	int  i = 1;

	x = x / 10;
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
		num = x;
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
