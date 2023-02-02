#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elemnts in alinked listint_t list
 * @h: A pointer to the hed of the listint_t list
 *
 * Return: The number of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
