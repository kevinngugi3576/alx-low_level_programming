#include "main.h"
#include <string.h>

/**
 * _memcpy - copies @n bytes from memory area pointed to by @src
 * into thst pointed by @dest
 * @dest: A pointer to memory to copy @src
 * @src: source to copy characters from
 * @n: number of bytes to copy from @src
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	const char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
