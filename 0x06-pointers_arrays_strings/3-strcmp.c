#include "main.h"



/**
 * _strcmp - function to compare two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)

{

	int i = 0;



	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))

		i++;

	return (*(s1 + i) - *(s2 + i));

}
