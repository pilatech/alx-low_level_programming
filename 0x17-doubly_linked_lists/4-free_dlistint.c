#include "lists.h"

/**
 * free_dlistint - free a doubly linked list.
 * @head: the start of the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
