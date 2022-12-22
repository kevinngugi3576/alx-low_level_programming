#include "main.h"

/**
 * _strcmp - compares pointer to two strings
 * @s1: pointer to first string being compared
 * @s2: pointer to second string being compared
 *
 * Return: if str1 < str2, the neagive difference of the first unmatched char
 * if str1 == str2, 0
 * if str1 > str2, the postive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 = *s2);
}
