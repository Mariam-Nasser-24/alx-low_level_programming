#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @i: The number that will be absluted
 * Return: i if the number is greater than or equal zero
 * and return i * (-1) if the number is less than zero
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * (-1));
}
