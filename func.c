#include "main.h"
/**
 * _printf - printf function
 * @format: format string
 * Return: the number of characters printed
 */
int _printf_int(const char *format, ...)
{
	int count = 0;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				_putchar(num);
				count += _putchar(num);
			}
			else
			{
				_putchar('%');
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return count;
}

