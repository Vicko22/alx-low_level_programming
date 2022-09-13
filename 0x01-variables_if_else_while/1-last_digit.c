#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks the last digit of n
 * prints if it is positive, negative or zero
 * Return: 0 if no errors occures
 */
int main(void)
{
	int n;
	int lw;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lw = n % 10;
	if (lw > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lw);
	else if (lw == 0)
		printf("Last digit of %d is %d and is zero\n", n, lw);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lw);
	return (0);
}
