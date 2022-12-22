#include "main.h"

/**
 * _strcmp - compares pointer to two strings
 * @s1: pointer to first string compared
 * @s2: pointer to the second string compred
 *
 * Return: if str1 < str2, the neagtive difference of the first unmtched char
 * if str1 == str2, 0
 * if str1 > str2, the postive difference of the first unmatched char
 */

int _strcmp(char 8s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 = *s2);
}
