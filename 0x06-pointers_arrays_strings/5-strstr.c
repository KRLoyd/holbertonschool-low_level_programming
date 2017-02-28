#include "holberton.h"

/**
 * _strstr - finds first occurance of substring needle in string haystack;
 * @haystack: string to evaluate
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of located substring or NULL if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle == '\0' || haystack == '\0')
	{
		return ('\0');
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			else
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
