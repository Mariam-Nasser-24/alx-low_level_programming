#include "main.h"
/**
 * rev_string - A function that prints a string, in reverse
 * @s: the string
 */
void rev_string(char *s)
{
	int i = 0, l = 0;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
