#include "main.h"
/**
 * _strcpy - A function that copies the string pointed to by src
 * @dest: the returned pointer
 * @src: the string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}
