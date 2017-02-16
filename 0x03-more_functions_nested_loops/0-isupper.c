#include "holberton.h"

/**
 * _isupper - evaluate if character is an upercase
 *@c: character to evaluate
 *
 * Return: 1 (if uppercase), 0 (otherwise)
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
