#include "main.h"

/**
 * _strstr - Finds the firdt occurence
 * @needle: Substring to be located.
 * @haystack: Location of substring @needle.
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

	int i;



	if (*needle == 0)

		return (haystack);



	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
