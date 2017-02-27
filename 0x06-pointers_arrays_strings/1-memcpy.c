#include "holberton.h"
/**
 * _memcpy - funciton that copies memory area
 * @dest: memory to be updated
 * @src: memory to save to dest
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return ((char *)dest);
}
