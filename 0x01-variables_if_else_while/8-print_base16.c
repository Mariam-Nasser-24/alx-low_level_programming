#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char o = 48, a = 'a';
	int i = 0;

	for (o = 48; o < 58 ; o++)
		putchar(o);
	for (i = 0; i < 5; i++)
		putchar(a++);
	putchar('\n');
return (0);
}
