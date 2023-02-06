#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - sets the value of  abit ata given index to 0
 * @n: a pointer to the bit
 * @index: the index set to the valur at indeces starting at 0
 *
 * Return: if an error occurs -1 else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
