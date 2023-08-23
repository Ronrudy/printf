#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void print_num(int n);
int _puts(char *str);
void handle_conversion_specifier(const char specifier, va_list args, int *length);

#endif
