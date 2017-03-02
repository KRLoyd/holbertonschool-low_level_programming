#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of s
 **/

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = (_strlen_recursion(s + 1));
	return (i + 1);
}
