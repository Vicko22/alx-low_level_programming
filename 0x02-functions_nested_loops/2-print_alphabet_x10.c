#include "main.h"

/**
 * print_alphabet_x10 - entry0
 * void: 2 preint alphabet
 * Return:0
 */

void print_alphabet_x10(void)
{
	char d, i;

	for (i = '0'; i <= '9'; i++)

	{
		for (d = 'a'; d <= 'z'; d++)

		{

			_putchar(d);

		}

		_putchar('\n');
	}
}
