#include "search_algos.h"
/**
 * print_array - function to print an integer array
 * 
 * @array: pointer to the first element in the array
 * @low: index of the first element in the array to print
 * @high: index of the last element in the array to print
 * Return: None
 **/
void print_array(int *array, int low, int high)
{
	if (array != NULL)
	{
		for (; low <= high; low++)
		{
			printf("%d", array[low]);
			if (low != high)
				printf(", ");
		}
		printf("\n");
	}
}
/**
 * rec_bs - function to search an integer array recursively
 *
 * @array: pointer to the first element in the array
 * @low: index of the first element in the subset array
 * @high: index of the last element in the subset array
 * @value: integer to search the array for
 * Return: index where value is found, -1 if not found or array is NULL
 **/
int rec_bs(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (high - low) / 2 + low;

	if (array[mid] == value)
		return (mid);
	if (high - low == 0)
		return (-1);
	else if (array[mid] > value)
	{
		if (high - low == 1)
			mid = low + 1;
		return (rec_bs(array, low, mid - 1, value));
	}
	else /* array[mid] < value */
	{
		if (high - low == 1)
			mid = high - 1;
		return (rec_bs(array, mid + 1, high, value));
	}
}
/**
 * binary_search - function to search an integer array using binary search
 *
 * @array: pointer to the first element of the array
 * @size: size of the array to evaluate
 * @value: value to find in the array
 * Return: index of value in the array, or -1 if not found
 **/
int binary_search(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (int)size;

	return (rec_bs(array, low, high - 1, value));
}
