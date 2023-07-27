#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a singly linked list.
 * @h: pointer to the first item on the list
 *
 * Return: Size of the list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}

