#include "holberton.h"

/**
 * print_diagonal - Prints diagonal line on terminal
 * @n: where \ should be printed
 *
 **/

void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col < row)
				{
					_putchar(' ');
				}
				if (col == n)
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
}
