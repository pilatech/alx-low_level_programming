#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - print the elements of the list.
 * @h: pointer to the head of the list.
 *
 * Return: number of items in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
