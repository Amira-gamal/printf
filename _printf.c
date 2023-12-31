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
				count += conversion(format, args);
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
