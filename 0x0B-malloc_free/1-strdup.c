#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strlen - counts the number of arrays in a parameter
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
 * _strcpy  - copy arrays ina string in the given parameter
 * @src: array of elements
 * @dest: destination of the array
 *
 * Return: always dest
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
 * _strdup - copies the string given as  a parameter
 * @str: array of elements
 *
 * Return: always NULL on success
 *
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);

	return (dst);
}
