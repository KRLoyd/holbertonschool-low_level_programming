#include "holberton.h"

/**
 * print_number - print an integer
 * @n: integer to print
 *
 **/

void print_number(int n)
{
<<<<<<< HEAD
	if (n >= 0)
		n = -n;
	else
		_putchar('-');
	if (n <= -1000000000)
		_putchar(n / -1000000000 % 10 + '0');
	if (n <= -100000000)
		_putchar(n / -100000000 % 10+ '0');
	if (n <= -10000000)
		_putchar(n / -10000000 % 10 + '0');
	if (n <= -1000000)
		_putchar(n / -1000000 % 10 + '0');
	if (n <= -100000)
		_putchar(n / -10000 % 10 + '0');
	if (n <= -10000)
		_putchar(n / -1000 % 10  + '0');
	if (n <= -1000)
		_putchar(n / -1000 + '0');
	if (n <= -100)
		_putchar(n / -100 % 10 + '0');
	if (n <= -10)
		_putchar(n / -10 % 10 + '0');
	if (n < 0)
		_putchar((n * -1) % 10 + '0');
	if (n == 0)
		_putchar(n + '0');
=======
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
>>>>>>> 8f4e80a7fb2185bf78be03073e945032f644a515
}
