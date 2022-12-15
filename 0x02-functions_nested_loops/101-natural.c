#include <stdio.h>

/**
 * main - prints sum of all multiples of 3,5 upto 1024
 * Rreturn: Always (success)
 */

int main(void)
{
	char  i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
			return (0);
}
