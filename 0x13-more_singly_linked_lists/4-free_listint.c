#include "lists.h"

/**
 * free_listint - frees the nodes
 * @head: pointer tothe begining of the code
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->n);
		free(current);
		current = next;
	}
}
