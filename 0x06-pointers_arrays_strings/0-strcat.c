#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)

{
	char d[98] = "Hello ";
	char a[] = "World!\n";
	char *p;

	printf("%s\n", d);
	printf("%s", a);
	p = _strncat(d, a, 1);
	printf("%s\n", d);
	printf("%s", a);
	printf("%s\n", p);
	p = _strncat(d, a, 1024);
	printf("%s", d);
	printf("%s", a);
	printf("%s", p);
	return (0);
}

