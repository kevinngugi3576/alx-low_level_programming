#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers reversed
 * @n: n.o of elements in array
 *
 */

void reverse_arry(int *a, int n)
{
	int tmp, index;

	for (index = n -1; index >= n /2; index--)
	{
		tmp =a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
