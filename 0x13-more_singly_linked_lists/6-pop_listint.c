#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - remove the head from the list.
 * @head: pointer to the list's head.
 *
 * Return: the removed element.
 */
int pop_listint(listint_t **head)
{
	int removed;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	removed = temp->n;
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (removed);
}
