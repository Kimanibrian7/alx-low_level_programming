#include "main.h"

/**
 * _pow_recursion - calcualtes the value of x raised power y
 * @x: the number to calcualte power of
 * @y: the number topwer
 * Return: the power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	return (x * (_pow_recursion(x, y - 1)));
}
