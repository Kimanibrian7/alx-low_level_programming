#include "main.h"

/**
 * _puts_recursion - recurses a string to print it
 * @s: string to be recursed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\n');
}
