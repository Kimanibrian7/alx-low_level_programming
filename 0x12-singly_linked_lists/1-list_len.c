#include "lists.h"

/**
 * list_len - evaluates the length of a linked list
 * @h: pointer to start of the link list
 * Return: the length of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
