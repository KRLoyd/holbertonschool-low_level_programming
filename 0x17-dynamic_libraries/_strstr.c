#include "holberton.h"
/**
 * _strstr - finds first occurance of substring needle in string haystack
 * @haystack: string to evaluate
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; k++, j++)
		{
			if (needle[j] != haystack[k] || haystack[k] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
