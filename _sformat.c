#include "main.h"

/**
 * _sformat - print all characters in string
 *
 * @ptr: va_list pointer for string
 * Return: 0 (success)
 *
 */

int _sformat(va_list ptr)
{
	int count = 0;

	char *c = va_arg(ptr, char*);

	while (*c != '\0')
	{
		count++;

		_putchar(*c);

		c++;
	}

	return (count);
}

