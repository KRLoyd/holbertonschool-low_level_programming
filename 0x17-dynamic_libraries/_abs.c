#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: integer to evaluate
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else /* n is negative */
		return (-n);
}
