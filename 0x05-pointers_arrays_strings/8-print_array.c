#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of and array of interger
 * @a: pointer to array
 * @n: number of array elememts
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
			printf(" ");
		}
	}
	printf("\n");
}
