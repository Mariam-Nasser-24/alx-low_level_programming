#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char z = 'z';
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(z--);
	}
	putchar('\n');
return (0);
}
