#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index.
 * @head: pointer to the beginning of the list.
 * @idx: the index to insert at.
 * @n: the value to insert.
 *
 * Return: pointer to a node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
		return (*head);
	}
	count = 0;
	temp = *head;
	while (temp != NULL)
	{
		if ((idx - 1) == count)
		{
			new->next = temp->next;
			temp->next = new;
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
