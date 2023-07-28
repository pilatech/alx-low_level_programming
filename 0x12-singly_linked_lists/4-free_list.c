#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - deallocate the memory of a linked list.
 * @head: first node of the list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}

}
