#include "main.h"
/**
 * print_int - prints integer
 * @args: argument list
 * Return: number of characters printed
 */

int print_int(va_list args)

{
	int num = va_arg(args, int);
	int length = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		length++;
	}

	length += print_positive_int(num);

	return length;
}

/**
 * print_positive_int - print positive integer
 * Return: number of characters printed
 */

int print_positive_int(int num)
{
	int length = 0;
	int reversed_num = 0;
	int digit;

	if (num == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num > 0)
	{
		digit = num % 10;
		reversed_num = reversed_num * 10 + digit;
		num /= 10;
	}

	while (reversed_num > 0)
	{
		digit = reversed_num % 10;
		_putchar('0' + digit);
		reversed_num /= 10;
		length++;
	}

	return length;
}
