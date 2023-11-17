#include "main.h"

/**
 * hexaLetters - convert larger that NINE numbers to hexa
 * @n: number to be converted
 * @c: character to decide upper case or lowercase conversion
 * Return: hexa number
 */

int hexaLetters(int n, char c)
{
	if (n > 9)
	{

		if (c == 'x')
		{
			n += 87;
		} else if (c == 'X')
		{
			n += 55;
		}

	} else
	{
		n += '0';
	}

	return (n);
}

/**
 * _hformat - print decimal as hexa
 * @ptr: pointer to decimal value need to be converted
 * @c: lower or upper selecter
 * Return: number of hexa digit
 */

int _hformat(va_list ptr, char c)
{
	long hexa = va_arg(ptr, long);
	int  i = 0, count;
	char *arr = malloc(16 * sizeof(char));
	int n;

	if (hexa == 0)
	{
		_putchar('0');

		free(arr);

		return (1);
	}

	while (hexa / 16 != 0)
	{
		n = hexa % 16;
		arr[i] = hexaLetters(n, c);
		hexa /= 16;
		i++;
	}
	n = hexa % 16;
	arr[i] = hexaLetters(n, c);
	i++;
	arr[i] = '\0';
	count = i;
	i--;

	while (i >= 0)
	{
		_putchar(arr[i]);
		i--;
	}

	free(arr);

	return (count);
}
