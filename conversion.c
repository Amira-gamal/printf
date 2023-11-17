#include "main.h"

/**
 * conversion - switch between multi format functions
 *
 * @format: char to be checked
 * @args: is pointer to formatted value
 *
 * Return:  number of printed chars
 */

int conversion(const char *format, va_list args)
{
	int count = 0;

	if (*format == 'c')
	{
		count += _cformat(args);
	} else if (*format == 's')
	{
		count += _sformat(args);
	} else if (*format == 'i' || *format == 'd')
	{
		count += myprintf_int(args);
	} else if (*format == 'b')
	{
		count += _bformat(args);
	} else if (*format == 'u')
	{
		count += _uforamt(args);
	} else if (*format == 'o')
	{
		count += _oformat(va_arg(args, unsigned int), count);
	} else if (*format == 'x' || *format == 'X')
	{
		int uppercase = (*format == 'X') ? 1 : 0;
		unsigned int value = va_arg(args, unsigned int);

		count += _xformat(value, count, uppercase);
	} else if (*format == '%')
	{
		_putchar('%');
		count++;
	}

	return (count);
}
