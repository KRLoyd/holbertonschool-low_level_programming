#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 **/

void print_number(int n)
{
	int last, div, b, length;

	div = 1;
	length = 0;
	last = n % 10;

/* save last digit in last, if negative, print -  */
	if (last < 0)
	{
		last = last * -1;
		_putchar('-');
	}
	n = n / 10;
	if (n < 0)
	{
		n = n * -1;
	}
/* find divisor */
	b = n;

	while (b > 0)
	{
		length += 1;
		div *= 10;
		b /= 10;
	}
	div /= 10;
/* print the digits */
	while (length >= 1)
	{
		_putchar(n / div + '0');
		n = n % div;
		div = div / 10;
		length--;
	}
	_putchar(last + '0');
}
