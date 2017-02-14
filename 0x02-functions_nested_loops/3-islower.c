#include "holberton.h"

/**
 * _islower - entry point
 * @c: characher to check
 *
 * Return: 0
 **/

int _islower(int c)
{
	int c;

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
