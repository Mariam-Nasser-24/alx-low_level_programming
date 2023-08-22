#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal
 * @n: the number of times the charactre _ should be printed
 */
void print_line(int n)
{
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
