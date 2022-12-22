#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: on success 1 if not then 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
