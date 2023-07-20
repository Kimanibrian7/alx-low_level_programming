#include "main.h"

/**
 * print_square - prints a square with #
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
