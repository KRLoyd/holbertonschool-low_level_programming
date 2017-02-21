#include "holberton.h"

/**
 * print_rev - function to print a string in reverse
 * @s: string to print
 *
 **/

void print_rev(char *s)
{
	int i;
	int c;

	while (s[c] != '\0')
	{
		c++;
	}

	c -= 1;

	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
