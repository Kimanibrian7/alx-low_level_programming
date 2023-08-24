#include "lists.h"

/**
 * _strlen - counts the length of a string
 * @s: string to be avaluated
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * add_node - add a node to the head of a pointer at begining
 * @head: poiter to pointer to start of the list
 * @str: str to be copied
 * Return: T_list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
