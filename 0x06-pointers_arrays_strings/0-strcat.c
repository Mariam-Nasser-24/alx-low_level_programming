#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0;

	while (src[i])
		i++;
	while (dest[k])
		k++;
	for (j = 0; j < i ; j++)
	{
		dest[k + j] = dest[k + j] + src[j];
	}
	return (dest);
}
