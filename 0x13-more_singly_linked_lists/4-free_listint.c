#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the list.
 * @head: pointer to the head of the list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	if (head)
	{
		temp = head;
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		/* set temp to head */
		/* move temp to head->next */
		/* free(head) and set head to temp */
		/* move tem to head->next */
		/** -- until head is null -- **/
	}
}
