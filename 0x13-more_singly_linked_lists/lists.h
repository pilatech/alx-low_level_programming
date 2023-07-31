#ifndef _LISTS_
#define _LISTS_

/**
 * struct listint_s - singly linkded list.
 * @n: integer.
 * @next: pointes to the next node.
 *
 * Description: singly linked list node structure.
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif
