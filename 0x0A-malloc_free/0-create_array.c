#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Entry Point
 * @size: size of the array
 * @c: character to initialize array
 *
 * Description: create an array of chars and initialize with specific char
 * Return: pointer to an array (Success), NULL (Failure)
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (!(size > 0))
	{
		return (NULL);
	}
	p = (char *)malloc((sizeof(char)) * size);

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return ((char *)p);
}
