#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte to fill memory
 * @n: number of bytes in memory
 *
 * Return: pointer to memory area of s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
