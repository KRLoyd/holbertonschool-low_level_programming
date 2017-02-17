#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 **/

void print_number(int n)
{
	if (n >= 0)
		n = -n;
	else
		_putchar('-');
	if (n <= -1000000000)
		_putchar(n / -1000000000 + '0');
	if (n <= -999999999)
		_putchar(n / -100000000 % 10 + '0');
	if (n <= -9999999)
		_putchar(n / -10000000 % 10 + '0');
	if (n <= -999999)
		_putchar(n / -1000000 % 10 + '0');
	if (n <= -99999)
		_putchar(n / -100000 % 10 + '0');
	if (n <= -9999)
		_putchar(n / -10000 % 10 + '0');
	if (n <= -999)
		_putchar(n / -1000 % 10 + '0');
	if (n <= -99)
		_putchar(n / -100 % 10 + '0');
	if (n <= -9)
		_putchar(n / -10 % 10 + '0');
	if (n <= 0)
		_putchar((n  % 10) * -1 + '0');
}
