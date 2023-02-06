#include "main.h"

/**
 * get_endlannes - checks the endlannes
 *
 * Return: if big endian 0 if little - endian 0
 */
int get_endiannes(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
