#include "holberton.h"

/**
 * print_line - print line in terminal
 * @n: line length
 *
 **/

void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
