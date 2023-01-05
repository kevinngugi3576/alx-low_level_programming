#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns value of x raised to power of y
 * @x: the value to be raised to y
 * @y: the value of power form
 *
 * Return: if (y < 0) show -1, else (y > 0) show 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
