#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the node at given index.
 * @head: pointer to the head of the list.
 * @index: the index we want.
 *
 * Return: Nothing.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	temp = head;
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
