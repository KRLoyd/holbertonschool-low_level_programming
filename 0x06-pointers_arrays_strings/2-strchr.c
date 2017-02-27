#include "holberton.h"

/**
 * _strlen - find the length of a string
 * @s: string
 *
 * Return: length of s
 **/

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strchr - locate a character in a string
 * @s: string to evaluate
 * @c: character to locate
 *
 * Return: pointer value of s
 **/

char *_strchr(char *s, char c)
{
	int i, length;

	length = _strlen(s);

	for (i = 0; i <= length; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	return (s + i);
}
