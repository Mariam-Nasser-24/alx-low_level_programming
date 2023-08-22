#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int i = 0, n = 0;

	for (i = 0; s[i] != '\0'; i++)
		n++;
	i = 0;
	for (i = n - 1; i <= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
