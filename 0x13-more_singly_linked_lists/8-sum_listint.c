#include "lists.h"

/**
 * sum_listint - sums the value in alinked list
 * @head: pointer to the start of a linked list
 * Return: sum of the list
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
