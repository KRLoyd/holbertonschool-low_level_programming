#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	(void) size;

	/* Holberton tests */
	printf("Holberton tests\n");
	printf("Found %d at index: %d\n\n",
	       2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n",
	       5, binary_search(array, 4, 5));
	printf("Found %d at index: %d\n\n",
	       999, binary_search(array, size, 999));

	/* My tests */
	printf("My tests\n");
	/* Odd array */
	printf("Array of odd elements::\n");
	printf("Found %d at index: %d\n\n",
	       2, binary_search(array, 5, 2));
	/* value is negative */
	printf("Value is negative::\n");
	printf("Found %d at index: %d\n\n",
	       -22, binary_search(array, size, -22));
	/* size is 0 */
	printf("Size is 0::\n");
	printf("Found %d at index: %d\n\n",
	       -22, binary_search(array, 0, -22));
	/* value is in second half of array */
	printf("Value in second half of array::\n");
	printf("Found %d at index: %d\n\n",
	       7, binary_search(array, size, 7));
	/* array is NULL */
	printf("Array is NULL::\n");
	printf("Found %d at index: %d\n\n",
	       999, binary_search(NULL, size, 999));

	return (EXIT_SUCCESS);
}
