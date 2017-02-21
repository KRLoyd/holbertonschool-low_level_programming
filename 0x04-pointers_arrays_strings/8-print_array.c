#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: array to evaluate
 * @n: elements to print
 *
 **/

void print_array(int *a, int n)
{
	int b;

	b = n - 1;

	for (n = 0; n <= b; n++)
	{
		printf("%d", a[n]);
		if (!(n == b))
		{
			printf(", ");
		}
	}
	printf("%c", '\n');
}
