#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase
 */
void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}

