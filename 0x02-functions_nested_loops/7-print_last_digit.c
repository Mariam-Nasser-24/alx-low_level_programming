#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @i: the number
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int l;

	if (i < 0)
		l = -1 * (i % 10);
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}
