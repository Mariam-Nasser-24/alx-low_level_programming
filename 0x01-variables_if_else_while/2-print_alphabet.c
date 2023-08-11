#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 97;
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
