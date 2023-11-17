#include "main.h"

/**
 * _oformat - prints oct
 * @x: print the argument
 * Return: numbers
 */

int _oformat(va_list x)
{
	unsigned int n = va_arg(x, unsigned int);
	int counter = 0, i = 0;
	unsigned int p = n;
	int *arr;

	do {
		p /= 8;
		counter++;

	} while (p != 0);

	arr = calloc(counter,  sizeof(int));

	if (arr == NULL)
		return (-1);

	p = n;

	for (i = counter - 1; i >= 0; i--)
	{
		arr[i] = p % 8;
		p /= 8;
	}
	while (i < counter)
	{
		_putchar(arr[i] + '0');
		i++;
	}

	free(arr);

	return (counter);
}
