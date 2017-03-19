#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include "base_struct.h"
#include <stdarg.h>
int _putchar(char c);
int _strlen(char *s);
void _strcpy(char *to, char *from);
char *int_string(int n);
void _rev(char *s);
int intlen(int n);
int _abs(int n);
int _printf(const char *format, ...);
int buffer_string(va_list ap, char *buffer, int index);
int buffer_char(va_list ap, char *buffer, int index);
int buffer_int(va_list ap, char *buffer, int index);
#endif
