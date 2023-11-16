#include "main.h"

/**
 * _bformat - print decimal as binary
 * @ptr: pointer to decimal
 * Return: number of binary digit
 */
int _bformat(va_list ptr)
{
	unsigned int m = va_arg(ptr, unsigned int);
	int  i = 0, count;
	char *arr = malloc(33 * sizeof(char));

	while (m / 2 != 0)
	{
		arr[i] = (m % 2) + '0';
		m = m / 2;
		i++;
		
		if (i >= 33)
			arr = realloc(arr, i + sizeof(char));
	}

	arr[i] = (m % 2) + '0';
	i++;
	arr = realloc(arr, i + sizeof(char));
	arr[i] = '\0';
	i--;
	count = i;

	while (i >= 0)
	{
		_putchar(arr[i]);
		i--;
	}

	free(arr);

	return (count);
}
