/**
 * struct print - base structure for _printf
 * @s: string for matching formaters
 * @(*f): function pointer that points to the corresponding function of the formater
 *
 */

typedef struct routes
{
	char c;
	int (*f)();
} routes;
