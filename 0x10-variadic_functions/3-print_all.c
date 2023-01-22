#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguemnts passed to the function
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i;
	int j;
	char *str = NULL;
	const char va_arg[] = "cifs"; while (format && format[i])
	{
		j = 0;
		while (va_arg[j])
		{
			if (format[i] == va_arg[j])
			{
				printf(",");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				*str = va_arg(valist, int);
				if (!str)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
		} i++;
	}
}
