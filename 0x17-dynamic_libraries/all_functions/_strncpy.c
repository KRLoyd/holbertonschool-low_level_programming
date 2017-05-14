#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - My function that copies a string to a buffer to the nth byte
 * @dest: buffer to copy the string to
 * @src: string to copy
 * @n: bytes to copy
 *
 * Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
