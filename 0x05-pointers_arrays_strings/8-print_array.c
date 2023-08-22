#include "main.h"
/**
 * print_array - A function that prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

}
