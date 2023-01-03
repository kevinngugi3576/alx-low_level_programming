#include "main.h"
/**
 * _memset - fills first bytes of memoryry pointed by @s with constant @c
 * @s: A pointer to memory
 * @b: Character to fill the memory
 * @n: bytes filled
 * description _memset: over there
 *
 * Return: Pointer to filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
