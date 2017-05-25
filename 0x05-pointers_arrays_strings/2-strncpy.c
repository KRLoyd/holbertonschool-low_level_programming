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

	/* Copy src to dest up to n or reaches '\0' */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* fill in the rest of dest's memory with '\0' */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
