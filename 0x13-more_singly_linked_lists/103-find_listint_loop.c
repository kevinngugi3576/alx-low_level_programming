#include "lists.h"
#include <string.h>

/**
 * find_listint_loop - finds the loops contaiined in listint_t list
 * @head: A pointer to the listint_t list to be checked
 * Return: if no loop is found - NULL else the address of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
