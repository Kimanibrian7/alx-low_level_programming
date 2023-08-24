#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly linked list
 * @h: pointer to the head of the node
 * Return: returns the numbers of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
