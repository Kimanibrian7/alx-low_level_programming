#include <stdio.h>

/**
 * main - prints the file name of the file it was executd from
 * Return: 0 on succes
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
