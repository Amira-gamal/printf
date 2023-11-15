#include "main.h"

/**
 * _printf - print formatted string to stdout
 *
 * @format: is the passed string
 *
 * Return:  0 (success)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) != '\0')
			{
				format++;
				if (*format == 'c')
				{
					count += _cformat(args);
				} else if (*format == 's')
				{
					count += _sformat(args);
				} else if (*format == 'i')
				{
					count += myprintf_i(args);
				} else if (*format == 'd')
				{
					count += myprintf_d(args);
				} else if (*format == '%')
				{
					_putchar('%');
					count++;
				}
			} else
			{
				return (-1);
			}
		} else
		{
			_putchar(*format);
			count++;
		}
		format++;
	} va_end(args);
	return (count);
}

