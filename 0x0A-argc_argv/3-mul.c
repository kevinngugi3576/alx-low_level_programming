#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	{
		printf("%d\n", result);
	}

	return (0);
}
