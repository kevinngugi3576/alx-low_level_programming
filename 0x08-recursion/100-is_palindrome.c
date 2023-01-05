#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns a string if its palindrome
 * @s: the string to be checked
 * 
 * Return: length of string
 *
 */

int is _palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return 1;
	}

	int i = 0;
	int j = len - 1;

	while (i < j)

	{
		if (s[i] != s[j])
		{
			return 0;
		}

		i++;

		j--;
	}

	return 1;

}
