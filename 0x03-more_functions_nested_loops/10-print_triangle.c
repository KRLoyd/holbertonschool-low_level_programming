#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 **/

void print_triangle(int size)
{
	int row;
	int col;
	int r;

	r = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = r; row >= 0; row--)
	{
		for (col = 0; col < size; col++)
		{
			if (col < row)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
