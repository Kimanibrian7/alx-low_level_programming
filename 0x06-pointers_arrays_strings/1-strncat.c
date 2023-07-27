#include "main.h"

/**
 * _strncat - concatenates n bytes of src string to dest
 * @src: source string
 * @dest: destination string
 * @n: bytesof the string
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
