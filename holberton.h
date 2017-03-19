#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "base_struct.h"
int _putchar(char c);
int _strlen(char *s);
int _strcpy(char *buffer, char *from, int index);
char *int_string(int n);
char *int_b_string(unsigned int n);
long decimal_binary(unsigned int n);
void _rev(char *s);
int intlen(int n);
int _abs(int n);
int _printf(const char *format, ...);
int buffer_string(va_list ap, char *buffer, int index);
int buffer_char(va_list ap, char *buffer, int index);
int buffer_int(va_list ap, char *buffer, int index);
int buffer_int_b(va_list ap, char *buffer, int index);
void reset_buffer(char *buffer, int size);
#endif
