#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s: first string to compare
 * @s2: second string to compare
 *
 * Return: negative if s < s2, positive if s > s2, 0 if s = s2
 **/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		    return (s1[i] - s2[i]);
	}
	return (0);
}
