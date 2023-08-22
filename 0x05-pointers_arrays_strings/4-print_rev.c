#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int i = 0, n = 0;

	for (i = 0; s[i]; i++)
		n++;
	while (n--)
	_putchar(s[n]);

	_putchar('\n');
}
