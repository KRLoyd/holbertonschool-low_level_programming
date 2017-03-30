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

	for (bitpl = 31; bitpl >= 0; bitpl--)
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
