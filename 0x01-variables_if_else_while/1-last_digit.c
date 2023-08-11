#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that print the last digit
 * Return: 0 (Success)
 */
int main(void)
{
	int n, N;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	N = n % 10;
	/* your code goes there */
	if (N > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, N);
	else if (N == 0)
		printf("Last digit of %d is %d and is 0\n", n, N);
	else if (N < 6 && N != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, N);
	return (0);
}
