#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings to stardard output
 * @separator: string pointer to separator
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
