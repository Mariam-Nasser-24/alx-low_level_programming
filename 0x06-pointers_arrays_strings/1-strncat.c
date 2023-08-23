#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[k + j] =  src[j];
	}
	dest[c + i] = '\0';
	return (dest);
}
