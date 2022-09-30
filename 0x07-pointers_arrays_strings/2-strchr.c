#include "main.h"

#include <string.h>



/**
* _strchr - Entry point
* *@s: the function accepts an input saved into s
* @c: the function accepts an input saved into c
* Return: 0
*/

char *_strchr(char *s, char c)
{

	int i = 0;



	while (s[i] >= '\0')



	{

		if (s[i] == c)

			return (&s[i]);

		i++;

	}

	return (NULL);

}
