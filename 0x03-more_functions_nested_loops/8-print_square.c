#include "holberton.h"

/**
 * print_square - print a square
 * @size: size of square
 *
 **/

void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
