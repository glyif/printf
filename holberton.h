#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include "base_struct.h"
int _strlen(char *s);
int _strcpy(char *buffer, char *from, int index);
char *int_string(int n);
char *int_b_string(unsigned int n);
long decimal_binary(unsigned int n);
void _rev(char *s);
int intlen(int n);
int _abs(int n);
int negative_copy(char *buffer, int index);
int _printf(const char *format, ...);
int (*router(char fmt))(va_list, char *, int);
int buffer_string(va_list ap, char *buffer, int index);
int buffer_char(va_list ap, char *buffer, int index);
int buffer_int(va_list ap, char *buffer, int index);
int buffer_int_b(va_list ap, char *buffer, int index);
void reset_buffer(char *buffer, int size);
int buffer_check(char *buffer, int index);
int buffer_percent(va_list ap, char *buffer, int index)
#endif
