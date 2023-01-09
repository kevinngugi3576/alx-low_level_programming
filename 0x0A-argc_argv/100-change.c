#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins to make change for an amount of money
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return 0 on succes 1
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	int num_coins = 0;

	while (cents >= 25)
	{
		num_coins++;

		cents -= 25;
	}

	while (cents >= 10)
	{
		num_coins++;

		cents -= 10;
	}

	while (cents >= 5)
	{
		num_coins++;

		cents -= 5;
	}

	while (cents >= 2)
	{
		num_coins++;
		
		cents -= 2;
	}

	while (cents >= 1)
	{
		num_coin++;

		cents -= 1;
	}

	printf("%d\n", num_coin);

	return (0);
}
