#include "main.h"

/**
 * _rformat - print r
 * @ptr: print the argument
 * @p: print the characters
 * Return: character
 */

int _rformat(va_list ptr, int p)
{
	char *str = va_arg(ptr, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		p++;
		i--;
	}
	return (p);
}
