#include "main.h"

/**
 *_sformat: print all characters in string
 *
 * return: 0 (success)
 *
 */

int _sformat(const char *c)
{
	int count = 0;

	while(*c != '\0')
	{
		count++;

		_putchar(*c);

		c++;
	}

	return count;
}
