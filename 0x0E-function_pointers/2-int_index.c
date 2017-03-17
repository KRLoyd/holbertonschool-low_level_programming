#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - search an array for an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to function to compare values
 * Return: index of first element where (cmp != 0)
 *         if no element matches: -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			a = cmp(array[i]);
			if (a != 0)
				return (i);
		}
	}
	return (-1);
}
