#include "main.h"

/**
 * _oformat - prints oct.
 * @m: print the argument.
 * @p: characters.
 * Return: numbers.
*/

int _oformat(unsigned int m, int p)
{
	int oct[100], i = 0, j;

	while (m != 0)
	{
		int remainder = m % 8;

		oct[i++] = '0' + remainder;
		m /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		p++;
	}
	else
	{
		j = i - 1;
		while (j >= 0)
		{
			_putchar(oct[j]);
			p++;
			j--;
		}
	}

	return (p);
}
