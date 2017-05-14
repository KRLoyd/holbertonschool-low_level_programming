#include "holberton.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: string to evaluate
 * @accept: prefix substring to check for
 *
 * Return: number of bytes in initial segment of s containing bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (n);
}
