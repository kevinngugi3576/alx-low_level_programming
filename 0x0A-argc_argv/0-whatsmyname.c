#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc: number of arguments
 * @argv: array of arguements
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	printf(" %d\n", argc);

	return (0);
}
