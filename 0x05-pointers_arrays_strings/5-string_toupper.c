#include "holberton.h"

/**
 * string_toupper - change all lowercase in string to uppercase
 * @s: string to evaluate
 *
 * Return: string with uppercase
 **/

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
