#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins to
 * make changes to an amount of money
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return 0 on succes 1
 *
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}
	while (i < 5)
	{

		while (cents >= coins[i])
		{
			num_coins++;
			cents -= coins[i];
		}
		i++;
	}
	printf("%d\n", num_coins);

	return (0);
}
