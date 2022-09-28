#include "main.h"

/**
 * swap_int - swaping the values of two integers
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int min;

	min = *a;
	*a = *b;
	*b = min;
}
