#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - it executes a function as a parameter
 * @array: array to itearate over
 * @size: size of the array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t, void (*action)(int))
{
	int i;

	if (!array || !action)

		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
