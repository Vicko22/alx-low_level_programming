#include <stdio.h>

/**
 * main - sums of 3 and 5
 * @void: multiples
 * Return: 0
 */

int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;

	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)

	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{

			total = toal + start_num;

		}
		else
		{

			continue;

		}
	}

	printf("%d", total);

	printf("\n");

	return (0);
}
