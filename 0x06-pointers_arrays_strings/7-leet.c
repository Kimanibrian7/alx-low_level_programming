#include "main.h"

/**
 * leet -changes characters to numbers
 * @c: string to be converted
 * Return: string c
 */

char *leet(char *c)
{
	int i, j;

	char *chars = "4433007711";
	char *letters = "aAeEoOtTlL";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (c[i] == letters[j])
			{
				c[i] = chars[j];
				break;
			}
		}
	}
	return (c);
}
