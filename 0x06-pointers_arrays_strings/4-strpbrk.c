#include "holberton.h"

/**
 * _strlen - find the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 **/

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strpbrk - locate the first of any byte s that matches a byte in accept
 * @s: string to look at
 * @accept: accepted bytes
 *
 * Return: pointer to byte in s that matches one in accept, or NULL if no match
 **/

char *_strpbrk(char *s, char *accept)
{
	int length, i, j;

	length = _strlen(s);

	for (i = 0; i <= length; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
