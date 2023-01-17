#include "main.h"
#include <stdio.>
/**
 * _putchar - writes the character to stdout
 * @c: character to print
 *
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
