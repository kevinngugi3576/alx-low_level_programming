#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of the lists
 * @head: pointer to the address to the head of the listint_t list
 * @n: the integer of the new node
 * Return: if the functions fails Null, else address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
