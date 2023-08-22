#include "main.h"
/**
 * _atoi - A function that convert a string to an integer
 * @s: the string
 * Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int si = 1;

	do {
		if (*s == '-')
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++)
	return (n * si);
}
