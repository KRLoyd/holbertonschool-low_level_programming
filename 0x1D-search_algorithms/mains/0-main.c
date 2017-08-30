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
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);
	char value;

	/* Holberton tests */
	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n\n", 999, linear_search(array, size, 999));

	/* My tests */
	/* Negative number */
	printf("Found %d at index: %d\n\n", -22, linear_search(array, size, -22));
	/* Try to find a letter */
	value = 'n';
	printf("Found %c at index: %d\n\n", value, linear_search(
		       array, size, value));
	/* Try to find a letter that has ascii val same as in array */
	value = '*';
	printf("Found %c at index: %d\n\n", value, linear_search(
		       array, size, value));

	/* No array */
	printf("Found %d at index: %d\n\n", 12, linear_search(NULL, size, 5));

	return (EXIT_SUCCESS);
}
