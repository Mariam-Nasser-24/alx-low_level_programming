#include "main.h"
/**
 * rev_string - A function that prints a string, in reverse
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
