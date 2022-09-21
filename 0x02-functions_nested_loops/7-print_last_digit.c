#include "main.h"

/**
 * _print_last_digit - last digit print
 * @n : this is the interger type number
 * Return: last number value
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{

		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}

	else

	{
		r = n % 10;
		_putchar(r + '0');
		return (r);

	}
}
