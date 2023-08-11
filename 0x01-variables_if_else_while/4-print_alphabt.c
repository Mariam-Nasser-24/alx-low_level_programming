#include <stdio.h>
/**
 * main - A program prints the alphabet in lowercase expt q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 97;
	int i = 0;

	for (i = 0; i < 26; i++, a++)
	{
		if (a == 'q' || a == 'e')
			continue;
			putchar(a);
	}
	putchar('\n');
	return (0);
}
