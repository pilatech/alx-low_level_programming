#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end - add item to the end of the list.
 * @head: pointer to the head of the list.
 * @n: the number to add.
 *
 * Return: address of the added element or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	}
	return (new);
}
