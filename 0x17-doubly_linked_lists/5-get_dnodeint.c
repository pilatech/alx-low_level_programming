#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index.
 * @head: where the list starts.
 * @index: the index to get.
 *
 * Return: the node or NULL on failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
