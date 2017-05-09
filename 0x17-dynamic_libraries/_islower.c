#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 if not
 **/
int _islower(int c)
{
/* check if c is lowercase */
	if (c >= 'a' && c <= 'z')
		return (1);

	else /* c is not a lowercase */
		return (0);
}
