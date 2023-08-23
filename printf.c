#include "main.h"

/**
 * _printf - prints formatted output
 * @format: a pointer to a string
 * Return: length of the string
 */

int _printf(const char *format, ...)

{
	int i, length = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}
		else
		{
			if (format[++i] == '\0')
				return (-1);
			handle_conversion_specifier(format[i], args, &length);
		}
	}

	va_end(args);
	return length;
}
