#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - my function to concatenate two strings to nth byte
 * @dest: first string
 * @src: second string, to be concatenated to dest
 * @n: bytes from src to copy to dest
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len, s_len, i, j;

	/* Find length of dest */
	for (d_len = 0; dest[d_len] != '\0'; d_len++)
		;
	/* Find length of src */
	for (s_len = 0; src[s_len] != '\0'; s_len++)
		;
	/* Copy src to dest after dest[d_len] */
	for (i = 0, j = d_len; i < n && src[i] != '\0'; i++, j++)
	{
		/* printf("Inside for loop to copy\n"); */
		dest[j] = src[i];
		/* printf("dest[j]: %c \n", dest[j]); */
	}
	if (s_len < n)
	{
		dest[d_len + s_len] = '\0';
	}
	return ((char *)dest);
}
