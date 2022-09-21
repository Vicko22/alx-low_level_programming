#include "main.h"

/**
 * print_sign - print number
 * @n: interger type
 * Return: 1 or 0 if false
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)

	{
		_putchar('-');
		return (-1);
	}

	else

	{
		_putchar('0');
		return (0);
	}
}
