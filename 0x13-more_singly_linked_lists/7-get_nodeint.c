#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to start
 * @index: what to be returned
 * Return: Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;


	if (head == NULL)
		return (NULL);
	current = head;
	i = 0;

	while (i < index)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}
	return (current);
}
