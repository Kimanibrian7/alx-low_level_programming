#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n: pointer to number
 * @index: index to be placed
 * Return: 1 if succesful and -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
