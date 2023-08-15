#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c
 * Return: 1 success
 * @c: The character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
