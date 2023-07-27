#include <stddef.h>
#include "lists.h"

/**
 * list_len - get length of a list.
 * @h: pointer to the first list item.
 *
 * Return: the length.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
