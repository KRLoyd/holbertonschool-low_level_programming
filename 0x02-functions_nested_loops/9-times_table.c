#include "holberton.h"

/**
 * times_table - print the 9 times table
 *
 **/

void times_table(void)
{
	int a, b, k;

	a = 0;

	while (a <= 9)
	{
		b = 0;

		while (b < 10)
		{
			k = a * b;
			if (k <= 9)
			{
				_putchar(k + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				if (b < 9)
				{
				_putchar(',');
				}
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
