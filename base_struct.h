/**
 * struct print - base structure for _printf
 * @s: string for matching formaters
 * @(*f): function pointer that points to the corresponding function of the formater
 *
 */

typedef struct print
{
	char *c;
	void (*f)();
} print;
