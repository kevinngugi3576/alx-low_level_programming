#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * is_prime_number - function that returns a primenumber
 * @n: the numbere to be checked
 *
 * Return: if n is a primenumber 1, if n is not a prime number 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
