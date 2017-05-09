#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if not
 **/
int _isupper(int c)
{
/* check if c is uppercase */
	if (c >= 'A' && c <= 'Z')
		return (1);

	else /* c is not a uppercase */
		return (0);
}
