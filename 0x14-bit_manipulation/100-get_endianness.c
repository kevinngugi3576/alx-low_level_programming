#include "main.h"

/**
 * get_endiannes - checks the endlannes of the function
 *
 * Return: if big endian 0 if little - endian 1
 */
int get_endiannes(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
