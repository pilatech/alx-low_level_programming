#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning.
 * @head: pointer to  the head of the list.
 * @n: the data.
 *
 * Return: pointer to the added item.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (*head);
}
