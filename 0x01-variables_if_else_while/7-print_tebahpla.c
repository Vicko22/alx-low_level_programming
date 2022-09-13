 #include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
