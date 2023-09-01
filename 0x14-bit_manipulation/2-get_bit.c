#include "main.h"

/**
 * get_bit - gets bit at an index
 * @n: number to be evaluated
 * @index: location of the bit tobeevaluated
 * Return: bit at index
 */
 
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index & 1);
	return (b);
}
