#include "holberton.h"
/**
 * _strpbrk - locate the first of any byte in s that mathces a byte in accept
 * @s: string to evaluate
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
				return (s + i);
		}
	}
	return ('\0');
}
