#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c
 * @c: The character to be printed
 * Return: 1 success  -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
