#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns a string if its palindrome
 * @s: the string to be checke
 * Return: length of string
 *
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i = 0;
	int j = 0;

	if (len == 0)
	{
		return (1);
	}
	{
		if (s[i] != s[j])
		{
			return (0);
		}

		i++;

		j--;
	}

	return (1);

}
