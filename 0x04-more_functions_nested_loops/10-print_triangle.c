#include "main.h"

/**
 * print_triangle- prints a triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j != i)
				_putchar(' ');
			if (j == i)
			{
				_putchar('#');
				for (k = 1; k < j; k++)
					_putchar('#');
			}
		}
	_putchar('\n');
	}
}
