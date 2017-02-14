#include "holberton.h"

/**
 * jack_bauer - print every minute of Jack's day
 *
 **/

void jack_bauer(void)
{
	int h, m;

	h = 00;

	while (h <= 23)
	{
		m = 00;

		while (m <= 59)
		{
			_putchar(h / 10 % 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 % 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
