#include "holberton.h"

/**
 * _isdigit - check if c is a digit
 * @c: character to evaluate
 *
 * Return: 1 (if digit), 0 (not digit)
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
