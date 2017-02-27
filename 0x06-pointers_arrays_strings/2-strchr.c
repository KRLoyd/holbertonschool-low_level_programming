#include "holberton.h"
/**
 * _strchr - locate a character in a string
 * @s: string to evaluate
 * @c: character to locate
 *
 * Return: pointer to first occurance of character c in string s,
 * NULL if character c not found
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s + i);
}
