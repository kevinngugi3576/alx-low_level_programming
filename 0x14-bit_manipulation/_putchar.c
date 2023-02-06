#include "main.h"
#include <unistd.h>
/**
 * _putchar - fucntion that puts character to stdout
 * @c: character to print
 *
 * Return: Always 0 on succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

