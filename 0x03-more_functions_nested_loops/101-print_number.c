#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 **/

void print_number(int n)
{
	int last_digit, tmp, length, div;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar ('-');
		last_digit = last_digit * (-1);
	}
	n = (n / 10);

	if (n < 0)
	{
		n = n * (-1);
	}

	tmp = n;
	length = 0;
	div = 1;
	while (tmp > 0)
	{
		length += 1;
		div *= 10;
		tmp = tmp / 10;
	}
	div = div / 10;

	while (div >= 1)
	{
		_putchar(n / div + '0');
		n = n % 10;
		div /= 10;
	}
	_putchar(last_digit + '0');
}
