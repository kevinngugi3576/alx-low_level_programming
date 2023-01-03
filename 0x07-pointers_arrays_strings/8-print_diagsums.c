#include "main.h"
#include <stdio.h>

/**
 * print_digsums - prints sum of diagonals of asquare matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 *
 * Return: always 0 (success)
 */

void print_digsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
