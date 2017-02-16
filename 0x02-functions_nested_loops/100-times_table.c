#include "holberton.h"
/**
 * print_times_table - print times table of specified n
 * @n: times table to print
 *
 * Return: void
 **/
void print_times_table(int n)
{
	int row;
	int col;
	int  k;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
		for (col = 1; col <= n; col++)
		{
			k = row * col;
			if (k < 10)
			{
			_putchar(','); _putchar(' '); _putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
			}
			else if (k > 9 && k <= 99)
			{
			_putchar(','); _putchar(' '); _putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			}
			else
			{
			_putchar(','); _putchar(' ');
			_putchar(k / 100 + '0');
			_putchar(k / 10 % 10 + '0');
			_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
		}
	}
}
