#include "holberton.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 **/

void more_numbers(void)
{
	char a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
	}
}
