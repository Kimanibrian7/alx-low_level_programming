#include "main.h"

/**
 * print_binary -converts a number to binary
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, m;
	m = 0;

	for (i = 63; i >= 0; i++)
	{
		num = n >> i
		if (num & 1)
		{
			_putchar('1');
			m++;
		}
		else if (m)
			_putchar('0');
	}
	if (!m)
		_putchar('0');
}
