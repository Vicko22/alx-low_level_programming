#include "main.h"

/**
 * _strncat - function to append string
 * @dest: string to append by src
 * @src: string to appen
 * @n: number of bytes
 * Return: address
 */

char *_strncat(char *dest, char *src, int n)

{

	int i, j;



	i = j = 0;

	while (*(dest + i))

		i++;

	while (j < n && *(src + j))

	{

		*(dest + i) = *(src + j);

		i++;

		j++;

	}

	if (j < n)

		*(dest + i) = *(src + j);

	return (dest);

}
