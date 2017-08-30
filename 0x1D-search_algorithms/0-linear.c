#include <stdio.h>

/**
 * linear_search - function that searches for a value in an array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is first found (Success), -1 (Failure)
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	index = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       (unsigned long)index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
