#include "main.h"
/**
 * _printf - printf function
 * @format: format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{int count = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{format++;
			if (*format == '\0')
				return (-1);

			if (*format == 'c')
			{count += _putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, const char *);

				if (!str)
					str = "(null)";

				while (*str)
					count += _putchar(*str++);
			}
			else if (*format == '%')
			{
				count += _putchar('%');
			}
		}
		else
		{
			count += _putchar(*format);
		}
		int str_len = 0;
		
		while (str[str_len] != '/0')
			str_len++;
		_putchar(str_len);
		count += str_len;
		format++;
	}
	va_end(args);
	return (count);
}
