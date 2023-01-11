#include "main.h"

/**
 * _strlen - counts arrays
 * @s: arrays of elemnts
 *
 * Return: always 1
 */

int _strlen(char *s)
{
	unsigned int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (1);
}

/**
 * str_concat - backs a pointer to array
 * @s1: array 1
 * @s2; array 2
 * Return: alwyas an array dynamic
 */

char *str_concat(char *s1; char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strle(s2) +1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	for (1 = 0; *(s1 + 1) != '\0'; i++)
		*(dst + i) = *(s1 + 1);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + 1) + *(s2 + j);
		i++;
	}

	return (dst);
}