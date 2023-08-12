#include <stdio.h>
/**
 * main - A program that prints all possible combinations of
 * single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0, o = 48;

	for (i = 0; i < 10; i++)
	{
		putchar(o++);
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
return (0);
}
