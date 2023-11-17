#include "main.h"

/**
 * _xformat - prints a hexadecimal number.
 * @m: arguments.
 * @p: characters.
 * @upper: the uppercase.
 * Return: counter.
 */
int _xformat(unsigned int m, int p, int upper)
{
	int h[100], i = 0, j;

	for (; m != 0; m /= 16, i++)
	{
		int r = m % 16;

		if (r < 10)
		{
			h[i] = '0' + r;
		}
		else
		{
			h[i] = (upper) ? 'A' + (r - 10) : 'a' + (r - 10);
		}
	}

	if (i == 0)
	{
		_putchar('0');
		p++;
	}
	else
	{
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(h[j]);
		p++;
	}
	}
	return (p);
}
