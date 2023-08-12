#include <stdio.h>
/**
 * main - A program that prints all possible combinations of
 * single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	char o = '0';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(o++);
		if (i == 9)
		{
			putchar('$');
			continue;
		}
		putchar(',');
		putchar(' ');
	}
return (0);
}
