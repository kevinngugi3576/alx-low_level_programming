#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  array for printing a string
 * @b: number of memory
 *
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
