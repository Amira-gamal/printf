#include "main.h"

/**
 * _rformat - print r
 * @ptr: print the argument
 * @p: print the characters
 * Return: character
 */

int _rformat(va_list ptr)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
