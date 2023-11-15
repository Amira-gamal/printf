#include "main.h"

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
		if (*format == '%' && *(format+1) != '%')
                {
			format++;

                        if (*format == 'c')
			{

				count += _cformat(args);

			}else if (*format == 's')
			{

				count += _sformat(args);
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
