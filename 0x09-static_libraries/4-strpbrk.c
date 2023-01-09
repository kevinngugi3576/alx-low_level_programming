#include "main.h"

/**
 * _strpbrk - searches for any of the set bytes
 * @s: searched string
 * @accept: set of bytes to be searched on
 *
 * Return: if a set is matched a pointer to be matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
