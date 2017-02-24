#include "holberton.h"

/**
 * leet - encode a string in 1337
 * @s: string to encode
 *
 * Return: encoded string
 **/

char *leet(char *s)
{
	int i;
	int j;
	char *s1;
	char *s2;

	i = 0;
	s1 = "aeotlAEOTL";
	s2 = "4307143071";

	while (s[i] != '\0')
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
		i++;
	}
	return (s);
}
