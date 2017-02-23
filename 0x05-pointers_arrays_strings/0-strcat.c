#include "holberton.h"

/**
 * _strcat - function to concatenate 2 strings
 * @dest: string to be added to
 * @src: string to add to *dest
 *
 * Return: pointer to resulitng string
 **/

char *_strcat(char *dest, char *src)
{
	int i, j;
	int length;

	i = 0;
	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	length--;

	for (i = 0, j = length; src[i] != 0; i++, j++)
	{
		dest[j] = src[i];
	}
	return ((char *)dest);
}
