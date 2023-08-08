#include "main.h"

/**
 * *_strdup - pointer function to string duplicate
 * @str: string to be duplicated
 * Return: the  pointer
 */

char *_strdup(char *str)
{
	char *a;
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		a[i] = str[i];
	}
	a[len] = '\0';

	return (a);
}
