#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of ints with min and max specified
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly allocated and initialized memory (SUCCESS)
 *         NULL (FAILURE)
 **/

int *array_range(int min, int max)
{
	int arrayel, num, i, *ptr;

	if (min > max)
		return (NULL);

	arrayel = (max - min) + 1;

	ptr = malloc(sizeof(int) * arrayel);

	if (ptr == NULL)
		return (NULL);

	else
	{
		for (i = 0, num = min; i < arrayel; i++, num++)
			ptr[i] = num;
	}
	return (ptr);
}
