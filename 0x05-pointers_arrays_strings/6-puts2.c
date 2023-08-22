#include "main.h"
/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character
 * @str: the pointer
 */
void puts2(char *str)
{
	int i = 0, n = 0;

	while (s[i])
		i++;
	for (n = 0; n < i; n++)
	{
		if (n % 2 == 0)
			_putchar(s[n]);
	}
}
