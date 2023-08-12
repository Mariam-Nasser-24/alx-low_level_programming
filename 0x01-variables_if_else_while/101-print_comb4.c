#include <stdio.h>
/**
 * main - A program that all possible different combinations
 * of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 48, y = 49, z = 50;

	for (x = 48; x < 56; x++)
	{
		for (y = 49; y < 57; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (z > y && z > x && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
return (0);
}
