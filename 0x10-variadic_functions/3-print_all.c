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
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", (char)va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float)va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char*);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
