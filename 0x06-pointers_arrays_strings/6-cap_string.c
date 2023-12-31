#include "main.h"
#include <stdio.h>
/**
 * isLower - A function that determines whether ascii is lowercase
 * @c: the character
 * Return: 1 if true, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - A function that determines whether ascii is a delimiter
 * @c: the character
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
		return (1);
	return (0);
}
/**
 * cap_string - A function that capitalizes all words of a string
 * @s: the string
 * Return: the string
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int j = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			j = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
