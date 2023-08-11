#include <stdio.h>
/**
 * main - A program prints the alphabet in lowercase expt q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
