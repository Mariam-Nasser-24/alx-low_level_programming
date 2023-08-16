#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (r > 9)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				continue;
			}
		else
		{
		_putchar(r + '0');
		if (j == 9)
			continue;
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
