#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - relocates a memory block using mlloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *_realloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}

	_realloc  = malloc(new_size);

	if (_realloc == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(_realloc + i) = clone[i];
	}
	free(ptr);

	return (_realloc);
}
