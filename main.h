#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printf_int(const char *format, ...);
int _print_binary(unsigned int n, char *buffer, size_t size);

#endif
