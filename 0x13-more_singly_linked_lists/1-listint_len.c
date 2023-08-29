#include "lists.h"

/**
 * listint_len - counts the length of a list
 * @h: pointer to a head of a linked list
 * Return: length of a string
 */

size_t listint_len(const listint_t *h)
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
