#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a strct dog
 * @d: The struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nill)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}

