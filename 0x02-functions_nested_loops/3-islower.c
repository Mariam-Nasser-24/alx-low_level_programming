#include "main.h"

/**
 * _islower - A function that checks the lowercase letters
 * @c: The character that will be printed
 * Return: 1 (Success)
 * 0 (Not Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
