#include "holberton.h"

/**
 * *_strcpy - copy string pointed to by second string to buffer pointed to by
 * first string
 * @dest: first string, has buffer
 * @src: second string, to be copied
 *
 * Return: pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return ((char*)dest);
}
