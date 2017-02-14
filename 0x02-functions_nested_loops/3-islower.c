#include "holberton.h"

/**
 * _islower - entry point
 *
 * Return: 0
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
