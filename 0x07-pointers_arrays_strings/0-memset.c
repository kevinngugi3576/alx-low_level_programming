#include "main.c"
/**
 * _memset - fills first bytes of memoryry pointed by @s with constant @c
 * @s: A pointer to memory
 * @c: Character to fill the memory
 * @n: bytes filled
 * description _memset: over there
 *
 * Return: Pointer to filled memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int indeex;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
