#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - it prints the positive numbers
 * @argc: number of arguemnts
 * @argv: array of argumnents
 *
 * Return: 1 on success and o on error
 */

int main(int argc, chr *argv[])
{
	int result = 0;
	int i;

	for (int i = 1; i < argc; i++)
	{
		int len = strlen(argv[i]);

		for (int j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return 1;
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return 0;
}
