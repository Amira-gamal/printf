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

	int count = 0, i = 0;

	va_start(args, format);

	while(format[i] != '\0')
	{
		if (format[i] == '%' && format[i] != '%')
                {
			format[i];

                        if (format[i] == 'c')
			{
				char c = va_arg (args, int);

				count += _cformat(c);

			}else if (format[i] == 's')
			{
				const char *s = va_arg (args, char*);

				count += _printf(s);
			}

		}else
		{
			_putchar(format[i]);

			count++;
		}



		i++;
	}

	va_end(args);
	
	return (count);

}
