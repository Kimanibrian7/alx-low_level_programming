#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining
 * @head: pointer to the start of linked list
 * @n: the data to be added on the new node
 * Return: address to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
