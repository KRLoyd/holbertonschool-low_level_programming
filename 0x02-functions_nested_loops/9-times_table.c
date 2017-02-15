#include "holberton.h"

/**
 * times_table - print the 9 times table
 *
 **/

void times_table(void)
{
	int row, col, k;

	row = 0;

	while (row <= 9)
	{
		col = 1;
		_putchar('0');
		while (col < 10)
		{
			k = row * col;
if (k <= 9)
			{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k /10 + '0');
				_putchar(k % 10 + '0');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
