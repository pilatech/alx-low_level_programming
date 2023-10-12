#include "lists.h"
/**
 * dlistint_len - print the doubly-linked-list.
 * @h: starting of the list.
 *
 * Return: number of printed elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (count);
	if (h->next == NULL)
	{
		count++;
	}
	else
	{
		temp = h->next->prev;

		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
