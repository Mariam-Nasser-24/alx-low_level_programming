#include <stdio.h>
/**
 * main - A program that print all possible different combinations
 * of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int o = 48, O = 49;

	for (o = 48; o <= 56; o++)
	{
		for (O = 49; O <= 57; O++)
		{
			if (o < O)
			{
				putchar(o);
				putchar(O);
				if (o != 56 || O != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
