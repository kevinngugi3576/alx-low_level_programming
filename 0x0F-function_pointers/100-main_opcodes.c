#include <stdio.h>
#include <stdlib.h>
#include "executable_start.h"



/**
 * main - prints its own codes
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = &__executable_start;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x\n", arr[i]);
			break;
		}

		printf("%02x ", (unsigned int)arr[i]);
	}

	return (0);
}