#include "lists.h"

/**
 * sum_dlistint - add the list's data together.
 * @head: where the list starts.
 *
 * Return: the sum or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
