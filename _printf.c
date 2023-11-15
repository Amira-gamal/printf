#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * 
 * main - entry point
 *
 * printf func - print formatted text to stdout
 *
 * return - 0 (success)
 *
 */

int _printf(const char* format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);

	while(*format != '\0')
	{
		if (*format == '%' && *format != '%')
                {
			format++;

                        if (*format == 'c')
			{
				char c = va_arg (args, int);

				count += _cformat(c);

			}else if (*format == 's')
			{
				const char *s = va_arg (args, char*);

				count += _sformat(s);
			}

		}else
		{
			_putchar(*format);

			count++;
		}



		format++;
	}

	va_end(args);
	
	return (count);

}
