#include "main.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest: destination string
 * @src: source string
 * @n: size to be copies
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
