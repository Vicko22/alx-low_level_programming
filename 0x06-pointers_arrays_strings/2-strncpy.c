#include "main.h"



/**
 * _strncpy - function to copy a string
 * @dest: 2nd strung
 * @src: string being copied
 * @n: number of bytes
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i;



	i = 0;

	while (i < n && *(src + i))

	{

		*(dest + i) = *(src + i);

		i++;

	}

	while (i < n)

	{

		*(dest + i) = '\0';

		i++;

	}

	return (dest);

}
