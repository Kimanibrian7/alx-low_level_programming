#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 * @head: pointer to a start of a list
 * @n: integer to n
 * Return: address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (new->n == NULL)
		return (NULL);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;

	return (new);
}
