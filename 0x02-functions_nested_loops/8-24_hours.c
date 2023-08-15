#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;

		for (a = 48; a <= 50; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				for (c = 48; c <= 53; c++)
				{
					for (d = 48; d <= 57; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
						if (a == 50 && b == 51 && c == 53 && d == 57)
							b = 57;
					}
				}
			}
		}
}
