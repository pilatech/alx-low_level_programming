#include <stddef.h>
#include "lists.h"
/**
 * listint_len - calculate the size of a list.
 * @h: pointer to the list.
 *
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
