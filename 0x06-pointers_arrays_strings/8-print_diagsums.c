#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 * @a: array of values
 * @size: size of the array
 **/

void print_diagsums(int *a, int size)
{
	int i, diaga, diagb;

	diaga = 0;
	diagb = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		diaga += a[i];
	}
	printf("%d, ", diaga);
	for (i = (size - 1); i < (size * size) - (size - 1); i += (size - 1))
	{
		diagb += a[i];
	}
	printf("%d\n", diagb);
}
