#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node to the beginning.
 * @head: pointer to the beginning of the list.
 * @str: the string member of the element.
 *
 * Return: address of the added element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *item;
	int len;

	item = malloc(sizeof(list_t));
	if (item == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	item->str = strdup(str);
	item->len = len;
	item->next = *head;
	*head = item;
	return (item);
}
