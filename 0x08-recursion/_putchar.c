#include "main.h"
#include <stdio.h>

/**
 * _puthcar - writes a character to stdout
 * @c: character to be printed
 *
 * Return: on succes 1
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
