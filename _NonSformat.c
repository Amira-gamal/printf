#include "main.h"

/**
 * Hexa - convert to hexa
 * @num: num to be converted
 * Return: hexa num
 */

int Hexa(int num)
{
	if (num > 9)
	{
		num = num + 55;
	} else
	{
		num = num + '0';
	}

	return (num);
}

/**
 * _NonSformat - print all characters in string with \x addition
 * @ptr: va_list pointer for string
 * Return: number of printed letters (success)
 */

int _NonSformat(va_list ptr)
{
	int count = 0, l, r, m;

	unsigned char *c = va_arg(ptr, unsigned char*);

	if (c == NULL)
		return (0);

	while (*c != '\0')
	{
		if ((*c > 0 && *c < 32) || *c >= 127)
		{
			_putchar('\\');
			_putchar('x');
			m = *c;
			r = Hexa(m % 16);
			m /= 16;
			l = Hexa(m % 16);
			_putchar(l);
			_putchar(r);
			count += 4;
		} else
		{
			count++;
			_putchar(*c);
		}

		c++;
	}


	return (count);
}

