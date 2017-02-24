#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of ints
 * @a: array to reverse;
 * @n: number of elements in array
 *
 **/

void reverse_array(int *a, int n)
{
	int i, tmp, b;
	i = 0;
	b = n;

	for (i = 0, b--; i < n / 2; i++, b--)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b] = tmp;
	}
 }
