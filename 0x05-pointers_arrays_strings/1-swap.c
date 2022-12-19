#include "main.h"

/**
 * swap_int - function that swaps the valuesof two integers
 * @a: first entry
 * @b: second enry
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
