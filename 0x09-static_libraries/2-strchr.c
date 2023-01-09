#include "main.h"

/**
 * _strchr - locates char im string
 * @s: searched string
 * @c: located char
 *
 * Return: if c is located then a pointer to first occurrecnce otherwise null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return (0);
}
