#include "holberton.h"

/**
 * print_last_digit - prints last digit of an number
 * @a: number to evaluate
 *
 * Return: value of last digit of input number
 **/

int print_last_digit(int a)
{
	a = (a % 10);

	if (a < 0)
	{
		a = a * (-1);
	}
	_putchar(a + '0');
	return (a);
}
