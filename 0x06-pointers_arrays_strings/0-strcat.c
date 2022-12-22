#include "main.h"

/**
 * strcat - focuses on the string that pointed out by dest
 * @dest: ointer focussed on
 * @src: the source string
 *
 * Return: a pointer to dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
