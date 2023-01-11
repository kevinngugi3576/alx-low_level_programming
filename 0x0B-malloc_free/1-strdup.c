#include "main.h"

/**
 * _stlen - counts array
 * @s: array of elements
 *
 * Return: on success 1
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
 * _strcpy  - copy arrays
 * @src: array of elemnts
 * @dest: destination array
 * return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * _strdup - arrays for printing a string
 * @str: array of elements
 * Return: pointer
 *
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int sze;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size *sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);

	return (dst);
}
