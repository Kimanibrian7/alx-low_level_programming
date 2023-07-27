#include "main.h"

/**
 * string_toupper - changes character touppercase
 * @c: string to be evaluated
 * Return: the string
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (i >= 'a' && i <= 'z')
			c[i] = c[i] - ('a' - 'A');
		i++;
	}
	return (c);
}
