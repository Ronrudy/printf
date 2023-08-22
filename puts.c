#include "main.h"

/**
 * _puts - prints a string
 * @str: straing
 * Return: lenght of the string
 */

int _puts(char *str)

{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++
	}

	return (i);
}
