#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase, and in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 97, A = 65;
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(a++);
	}
	i = 0;
	for (i = 0; i < 26; i++)
	{
		putchar(A++);
	}
	putchar('\n');
	return (0);
}
