#include "holberton.h"

/**
 * record_root - find root of n
 * @i: square root of n
 * @n: number to evaluate
 *
 * Return: i if square root, -1 if no square root
 **/

int record_root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (record_root(i + 1, n));
}

/**
 * _sqrt_recursion - funciton that returns the natural square root of a number
 * @n: number to evaluate
 *
 * Return: natural square root, or -1 if no natural square root
 **/

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	n = record_root(i, n);
	return (n);
}
