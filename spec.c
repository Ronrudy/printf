#include "main.h"
/**
 * handle_conversion_specifier -handles the conversion specifier
 * @specifier: specifiers to work on
 * @args: arguments
 * @length: length
 * Return: specifiers
 */
void handle_conversion_specifier(const char specifier,
va_list args, int *length)
{
	char *str;

	switch (specifier)
	{
		case 'c':
			_putchar((char) va_arg(args, int));
			(*length)++;
			break;
		case 's':
			str = va_arg(args, char*);

			(*length) += _puts(str);
			break;
		case 'd':
		case 'i':
			(*length) += print_int(args);
			break;
		case '%':
			_putchar('%');
			(*length)++;
			break;
		default:
			_putchar('%');
			_putchar(specifier);
			(*length) += 2;
			break;
	}
}
