#include "main.h"

/**
 * *str_concat- concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to new concantenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, len, len1, len2;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	len = len1 + len2;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		a[i] = s1[i];
	j = 0;
	for (; i < len; i++)
	{
		a[i] = s2[j];
		j++;
	}
	a[len] = '\0';

	return (a);
}
