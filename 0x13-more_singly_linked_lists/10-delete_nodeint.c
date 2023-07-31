#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at a given index.
 * @head: the list's head pointer.
 * @index: the index to delete at.
 *
 * Return: 1 on success and -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	temp = *head;
	count = 0;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp != NULL)
	{
		if ((index - 1) == count)
		{
			temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
			temp2 = NULL;
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
