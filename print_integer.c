#include "main.h"

/**
 * myprintf_i - prints integer
 * @ptr: print the argument
 * Return: integer
*/

int myprintf_i(va_list ptr)
{
	int ar = va_arg(ptr, int);
	int count = 0;
	int num, digit, exp = 1;

	if (ar < 0)
	{
		_putchar('-');
		count++;
		ar = -ar;
	}
	num = ar;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = ar;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num -= digit * exp;
			exp /= 10;
			count++;
		}
	}
	_putchar(ar % 10 + '0');
	count++;
	return (count);
}

/**
 * myprintf_d - prints my decimal
 * @ptr: print the argument
 * Return: integer
*/

int myprintf_d(va_list ptr)
{
	int ar = va_arg(ptr, int);
	int count = 0;
	int num, digit, exp = 1;

	if (ar < 0)
	{
		_putchar('-');
		count++;
		ar = -ar;
	}
	num = ar;
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = ar;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num -= digit * exp;
			exp /= 10;
			count++;
		}
	}
	_putchar(ar % 10 + '0');
	count++;
	return (count);
}
