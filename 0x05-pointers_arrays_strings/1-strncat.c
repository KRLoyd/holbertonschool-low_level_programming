#include "holberton.h"

/**
 * _strncat - concatenate 2 strings to nth byte
 * @dest: string to be concatenated to
 * @src: string to be added to dest
 * @n: the number of bytes to concatenate
 *
 * Return: pointer to the string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int lengths, lengthd, a, b;

	lengths = 0;
	lengthd = 0;

	while (src[lengths] != '\0')
	{
		lengths++;
	}
	while (dest[lengthd] != '\0')
	{
		lengthd++;
	}
	for (a = 0, b = lengthd; a < n; a++, b++)
	{
		dest[b] = src[a];
	}
	if (lengths < n)
	{
		dest[n] = '\0';
	}
	return ((char *)dest);
}
