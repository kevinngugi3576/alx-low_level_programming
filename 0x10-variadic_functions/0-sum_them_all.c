#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the parameters
 * @n: number of arguments
 *
 * Return: sum of aparmeters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
