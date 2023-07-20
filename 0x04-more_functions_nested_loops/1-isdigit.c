#include "main.h"

/**
 * _isdigit - looks for an upper case character
 * @c: character to be evaluated
 * Return: 1 if uppercase and 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
