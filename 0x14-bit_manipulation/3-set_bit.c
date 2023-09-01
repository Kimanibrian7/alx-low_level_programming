#include "main.h"

/**
 * set_bit - set bit to an index
 * @n: number
 * @index: index for placement
 * Return: 1 on succes and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1UL << index;
	*n = *n | i;
	return (1);
}
