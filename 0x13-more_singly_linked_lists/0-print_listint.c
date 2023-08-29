#include "lists.h"

/**
 * print_listint- lists a linked lsit with integer variables
 * @h: pointer to the start of a linked list
 * Return: the length of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while(h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
