#include "main.h"

/**
 * binary_to_uint- converts a binary to an unsigned integer
 * @b: pointer to a string of character
 * Return: binary representation of the number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	if (!b)
		return (0);
	n = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] <= '0' || b[i] >= '1')
			return (0);
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
