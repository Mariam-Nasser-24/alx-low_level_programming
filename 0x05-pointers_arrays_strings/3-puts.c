#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: the string
 */
void _puts(char *str)
{
	int i = 0, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n++;
	i = 0;
	for (i = 0; i < n; i++)
	_putchar(str[i]);
	_putchar('\n');
}
