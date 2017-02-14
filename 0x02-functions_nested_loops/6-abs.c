#include "holberton.h"

/**
 * _abs -find absolute value of an integer
 * @a: integer to be evaluated
 *
 * Return: absolute value of int
 **/

int _abs(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	}
	else
	{
		return (a);
	}
}
