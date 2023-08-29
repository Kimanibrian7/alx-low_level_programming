#include "lists.h"

/**
 * pop_listint - removes the first nnode in the list
 * @head: pointer to the head node to be deleted
 * Return: the integer value that was in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (*head == NULL)
		return (0);

	new = *head;
	i = new->n;
	*head = (*head)->next;

	free(new);

	return (i);
}
