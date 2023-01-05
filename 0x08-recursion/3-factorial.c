#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be factored
 *
 * Return: if (n<0) factorial is -1 elseif (n > 0 ) factorial is -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	else if (n == 0)
	{
		return 1;
	}

	else
	{
		return n * factorial(n - 1);
	}
}

