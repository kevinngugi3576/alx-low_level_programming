#include <stdio.h>

/**
 * main - Prints the sume of even fibonacci numbers
 * less than 4000000
 * Return: 0 (success)
 */
int main(void)
{

	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if
			(k % 2 == 0);
		else
			(sum += k);
		j = k - j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
