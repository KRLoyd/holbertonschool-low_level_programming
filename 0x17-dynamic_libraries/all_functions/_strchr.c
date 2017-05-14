#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to evaluate
 * @c: character to locate
 *
 * Return: pointer value of s
 */
char *_strchr(char *s, char c)
{
	int i, length;

	length = _strlen(s);

	for (i = 0; i <= length; i++)
	{
		if (*(s + i) == c)
			break;
	}
	return (s + i);
}
