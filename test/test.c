#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s;
	char *s2;
	char *s3;
	char *s4;
	char c;
	int i;
	int b;

	c = 'p';

	i = -123455;

	s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla in vehicula ipsum. Aliquam sit amet aliquam velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus venenatis euismod nibh, eget elementum metus fringilla a. Ut tincidunt auctor posuere. Phasellus quis neque metus. Nam in justo ut sapien blandit auctor sed at neque. In aliquam molestie egestas. Donec ac urna auctor, sollicitudin purus et, eleifend tellus. Cras ultricies massa nunc.";

	s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla in vehicula ipsum. Aliquam sit amet aliquam velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus venenatis euismod nibh, eget elementum metus fringilla a. Ut tincidunt auctor posuere. Phasellus quis neque metus. Nam in justo ut sapien blandit auctor sed at neque. In aliquam molestie egestas. Donec ac urna auctor, sollicitudin purus et, eleifend tellus. Cras ultricies massa nunc.";

	s3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla in vehicula ipsum. Aliquam sit amet aliquam velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus venenatis euismod nibh, eget elementum metus fringilla a. Ut tincidunt auctor posuere. Phasellus quis neque metus. Nam in justo ut sapien blandit auctor sed at neque. In aliquam molestie egestas. Donec ac urna auctor, sollicitudin purus et, eleifend tellus. Cras ultricies massa nunc.";

	s4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla in vehicula ipsum. Aliquam sit amet aliquam velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus venenatis euismod nibh, eget elementum metus fringilla a. Ut tincidunt auctor posuere. Phasellus quis neque metus. Nam in justo ut sapien blandit auctor sed at neque. In aliquam molestie egestas. Donec ac urna auctor, sollicitudin purus et, eleifend tellus. Cras ultricies massa nunc.";

	b = -98;

	printf("asdfasdfas\n");
	_printf("fasdf %s, %c, %s, %s, %s, %i, %b\n", s, c, s2, s3, s4, i, b);
	_printf("%b\n", 98);
	_printf("%%\n");
	/**
    int len;
	int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    
	_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
	*/
    return (0);
}
