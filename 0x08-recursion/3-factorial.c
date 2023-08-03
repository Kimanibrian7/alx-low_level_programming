#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the number to be factoried
 * Return: the factorial value
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (n + (factorial(n - 1)));
}
