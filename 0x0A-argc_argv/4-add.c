#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - it prints the positive numbers
 * @argc: number of arguemnts
 * @argv: array of argumnents
 *
 * Return: 1 on success and o on error
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 1;
	int j = 0;

	while (i < argc)
	{
		int len = strlen(argv[i]);

		while (j < len)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}
	}


	printf("%d\n", result);

	return (0);
}
