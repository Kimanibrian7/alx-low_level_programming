#include "main.h"

/**
 * reverse_array - reverse integer array
 * @a: array tobe reversed
 * @n: size of the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
