#include "main.h"

/**
 * swap_int- swaps 2 integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
