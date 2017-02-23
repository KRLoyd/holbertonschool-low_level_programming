#include "holberton.h"

/**
 * _strncpy - copy a string to n
 * @dest: string to return
 * @src: string to copy
 * @n: number to copy
 *
 * Return: pointer to string in dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
