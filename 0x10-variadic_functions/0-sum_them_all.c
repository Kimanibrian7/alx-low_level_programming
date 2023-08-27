#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	sum = 0;	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	return (sum);	
}
