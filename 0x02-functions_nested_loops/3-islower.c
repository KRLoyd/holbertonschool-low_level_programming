#include "holberton.h"

/**
 * _islower - chech character to see if an upper or lower -case
 * @c: character to check
 *
 * Return: 0
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);;
	}
	else
	{
		return (0);
	}
}
