#include "main.h"
/**
 * rev_string - A function that prints a string, in reverse
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0, n = 0;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		n++;
	}
	_putchar('\n');
	while (n--)
	_putchar(s[n]);

	_putchar('\n');
}
