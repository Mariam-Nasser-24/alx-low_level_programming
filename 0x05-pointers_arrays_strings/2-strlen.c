#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0, n = 0;

	for (i = 0; *s[i] != '\0'; i++)
		n++;
	return (n);
}
