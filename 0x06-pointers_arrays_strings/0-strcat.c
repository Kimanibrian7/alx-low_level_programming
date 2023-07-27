#include "main.h"

/**
 * _strcat - adds a source string to a destination string
 * @dest: destination string
 * @src: source string
 * Return: the final contenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
