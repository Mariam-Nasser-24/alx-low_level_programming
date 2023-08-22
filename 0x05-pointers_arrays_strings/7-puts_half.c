#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * @str: the pointer
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;
	if (i % 2 == 1)
	{
		for (j = (i - 1) / 2; j < i; j++)
		_putchar(str[j]);
	}
	else
	{
		for (j = (i / 2) + 1; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
