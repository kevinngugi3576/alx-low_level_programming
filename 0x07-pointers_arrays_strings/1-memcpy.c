#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area pointed to by @src into thst pointed by @dest
 * @dest: A pointer to memory to copy @src
 * @src: source to copy characters from
 * @n: number of bytes to copy from @src
 *
 * Return: pointer to @dest
 */

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destinantion = dest;
	const unsigned char *source = src;

	for (index =0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
