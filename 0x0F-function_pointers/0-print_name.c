#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_names - prints the names
 * @name: character to print
 * @f: pointer to function
 */
void print_names(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
