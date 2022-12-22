#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase in astring
 * @str: changed string
 *
 * Return: pointer to changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		indexx++;
	}
	return (str);
}
