#include "main.h"

/**
 * cap_string -capitalizes each word of a string
 * @c: string to be evaluated
 * Return: the capitalised string
 */

char *cap_string(char *c)
{
	int i;

	i = 0;

	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - ('a' - 'A');
	while (c[i] != '\0')
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',' || c[i] == ';' || c[i] == '.' || c[i] == '!' ||
			 c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
		if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			c[i + 1] = c[i + 1] - ('a' - 'A');
		}
	i++;
	}
	return  (c);
}
