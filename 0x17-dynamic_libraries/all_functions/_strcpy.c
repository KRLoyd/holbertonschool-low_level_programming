#include "holberton.h"
/**
 * _strcpy - My function that copies a string to a buffer, including null
 * @dest: buffer to copy the string to
 * @src: string to copy
 *
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
