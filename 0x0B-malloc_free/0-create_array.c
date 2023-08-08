#include "main.h"

/**
 * *create_array - pointer to an array of strings
 * @size: size of the array
 * @c: character to be in the array
 * Return: NULL if size is zero and pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = (char *)malloc(sizeof(c) * size);
	for (i = 0; i <= size; i++)
		a[i] = c;
	return (a);
}
