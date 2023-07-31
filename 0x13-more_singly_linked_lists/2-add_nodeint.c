#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - add node at the beginning of a list.
 * @head: pointer to the head.
 * @n: the value to add.
 *
 * Return: address of the new item or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
