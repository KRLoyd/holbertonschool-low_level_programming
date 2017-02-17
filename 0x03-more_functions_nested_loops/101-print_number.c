#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 **/

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n > 9999)
	{
		_putchar(n / 10000 + '0');
	}
	if (n > 999)
	{
		_putchar(n / 1000 % 10 + '0');
	}
	if (n > 99)
	{
		_putchar(n / 100 % 10 + '0');
	}
	if (n > 9)
	{
		_putchar(n / 10 % 10 + '0');
	}
	if (n >= 0)
	{
		_putchar(n % 10 + '0');
	}
}
