#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to a separator string
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < (n -1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
