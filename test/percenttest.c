#include <stdio.h>
#include <limits.h>
#include "../holberton.h"

int main (void)
{
	int len;
	int len2;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%]\n");
	len2 = printf("Percent:[%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%]\n");
	len2 = printf("Percent:[%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%%]\n");
	len2 = printf("Percent:[%%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%%%]\n");
	len2 = printf("Percent:[%%%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%%%%]\n");
	len2 = printf("Percent:[%%%%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%%%%%]\n");
	len2 = printf("Percent:[%%%%%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);

	len = _printf("Percent:[%%%%%%%%]\n");
	len2 = printf("Percent:[%%%%%%%%]\n");
	_printf("_printf len:[%d]\n", len);
	printf("Printf Len:[%d]\n", len2);
}
