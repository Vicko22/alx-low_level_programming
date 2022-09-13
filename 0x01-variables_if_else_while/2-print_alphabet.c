#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char op;

	for (op = 'a'; op <= 'z'; op++)
		putchar(op);
	for (op = 'A'; op <= 'Z'; op++)
		putchar(op);
	putchar('\n');
	return (0);
}
