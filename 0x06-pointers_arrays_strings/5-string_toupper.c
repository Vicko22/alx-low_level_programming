#include "main.h"

/**
 * string_toupper - functions to change lowercase letters to uppercase letters
 * @s: string to change
 * Return: 0
 */

char *string_toupper(char *s)

{

	int i = 0;



	while (*(s + i))

	{

		if (*(s + i) >= 'a' && *(s + i) <= 'z')

			*(s + i) -= 'a' - 'A';

		i++;

	}

	return (s);

}
