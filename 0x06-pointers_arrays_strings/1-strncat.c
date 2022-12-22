#include "main.h"

/**
 * _strncat - focuses on two strings using the most number of bytes from src
 * @dest: string appended on
 * @src: string appended to des
 * @n: byte from src to be appended to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] - src[index];

	return (dest);
}
