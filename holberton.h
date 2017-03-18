#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include "base_struct.h"
#include <stdarg.h>
int _putchar(char c);
int _strlen(char *s);
void _strcpy(char *to, char *from);
int _printf(const char *format, ...);
void print_string(va_list ap);
void print_char(va_list ap);
#endif
