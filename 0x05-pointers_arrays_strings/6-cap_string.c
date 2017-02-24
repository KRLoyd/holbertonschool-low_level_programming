#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string to evaluate
 *
 * Return: evaluated string with capitalization
 **/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
