#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - add together all the items in the list.
 * @head: the head of the list.
 *
 * Return: the total.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
