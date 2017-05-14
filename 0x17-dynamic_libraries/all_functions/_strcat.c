#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - my function to concatenate two strings
 * @dest: first string
 * @src: second string, to be concatenated to dest
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int d_len, i;

	/* Find length of dest */
	for (d_len = 0; dest[d_len] != '\0'; d_len++)
		;
	/* Copy src to dest after dest[d_len] */
	for (i = 0; src[i] != '\0'; i++, d_len++)
		dest[d_len] = src[i];

	return (dest);
}
