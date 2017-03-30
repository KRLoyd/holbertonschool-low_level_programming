#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent in binary
 *
 * Return: binary representation of n without leading zeros
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy;
	int bitpl, compare;

	bitpl = (sizeof(unsigned long int) * 8) - 1;

	if (n == 0)
		_putchar ('0');
	for (; bitpl >= 0; bitpl--)
	{
		copy = n >> bitpl;
		if (copy & 1)
		{
			_putchar ('1');
			compare = 1;
		}
		else
		{
			if (compare == 1)
				_putchar ('0');
		}
	}
}
