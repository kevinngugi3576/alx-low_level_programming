#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head of a listint_t list
 * @head: A pointer to the address to the head of listint_t list
 *
 * Return: if the linked list is empty 0 else the head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
