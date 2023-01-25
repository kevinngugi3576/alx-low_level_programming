#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * main - prints its own codes
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;

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
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02x\n", i);
		}
		printf("\n");
	}

	return (0);
}
