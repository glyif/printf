/**
 * struct print - base structure for _printf
 * @s: string for matching formaters
 * @(*f): function pointer that points to the corresponding function of the formater
 *
 */

struct routes
{
	char c;
	int (*f)(va_list, char *, int);
};

typedef struct routes routes;
