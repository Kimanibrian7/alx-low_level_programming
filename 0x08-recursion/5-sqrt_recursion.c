#include "main.h"

/**
 * _sqrt_recursion - looks for a square root
 * @n: number tobe evaluated
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int p

	if (n == 0 || n == 1)
		return (n);

	p = _sqrt_recursion(n - 1);
	if (((p * p) <= n) && ((p++) * (p++)) > n)
		return (p);
	return (_sqrt_recursion(n - 1));
}
