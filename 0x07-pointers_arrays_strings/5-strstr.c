#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: searched string
 * @needle: substring to be located
 *
 * Return: if a string is located, a pointe to the beginning of substring
 * else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return(haystack);

	while (*haystack)
	{

		index = 0;

	if (haystack[index] == needle[index])
	{
		do {
			if (needle[index + 1 ] == '\0')
				return (haystack);

			index++;

		} while (haystack[index] == needle[indx]);
	}

	haystack;
	}

	return ('\0');
}
