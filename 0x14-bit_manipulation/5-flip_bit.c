#include "main.h"

/**
 * flips_bits - return number of bits to flips a num to another
 * @n: num 1
 * @m: Num 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, r = 1;
	unsigned int i, j = 0;

	for (i = 0; i < 64; i++)
	{
		if (r == (diff & r))
			j++;
		r <<= 1;
	}
	return (j);
}
