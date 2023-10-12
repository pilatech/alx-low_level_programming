#include "lists.h"
/**
 * print_dlistint - print the doubly-linked-list.
 * @h: starting of the list.
 *
 * Return: number of printed elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = h->next->prev;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
