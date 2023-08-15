#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @i: the number
 * Return: the last digit
 */
int print_last_digit(int i)
{
	_abs(i);
	return (i % 10);
}
