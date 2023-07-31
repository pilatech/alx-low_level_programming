#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint2 - frees the memory allocated to the list.
 * @head: pointer to the head.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head)
	{
		temp = *head;
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}

	}
}
