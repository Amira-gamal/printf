#include "main.h"

/**
<<<<<<< HEAD
 * _oformat - prints oct.
 * @m: print the argument.
 * @p: characters.
 * Return: numbers.
=======
 * _oformat - prints oct
 * @x: print the argument
 * Return: numbers
>>>>>>> 216a249e735bfcd07fb3ea0b9e6c442bec0a0d7f
 */
int _oformat(unsigned int m, int p)
{
<<<<<<< HEAD
	int oct[100], i = 0, j;

	while (m != 0)
	{
		int remainder = m % 8;

		oct[i++] = '0' + remainder;
		m /= 8;
	}
	if (i == 0)
=======
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
>>>>>>> 216a249e735bfcd07fb3ea0b9e6c442bec0a0d7f
	{
		_putchar('0');
		p++;
	}
<<<<<<< HEAD
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
=======
	while (i < counter)
	{
		_putchar(arr[i] + '0');
		i++;
	}

	free(arr);

	return (counter);
>>>>>>> 216a249e735bfcd07fb3ea0b9e6c442bec0a0d7f
}

