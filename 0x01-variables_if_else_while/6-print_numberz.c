#include <stdio.h>
/**
 * main - A programthat prints all single digit numbers of base 10
 * without using char
 * Return: 0 (Success)
 */
int main(void)
{
	int n[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57}, i = 0;

	for (i = 0; i < 10; i++)
		putchar(n[i]);
		putchar('\n');
	return (0);
}
