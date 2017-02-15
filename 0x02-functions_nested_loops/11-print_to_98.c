#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers n to 98
 * @n: number to begin sequence
 *
 **/

void print_to_98(int n)
{
        while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		else if (n == 98)
		{
			printf("\n");
		}
		n--;
	}
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		else if (n == 98)
		{
			printf("\n");
		}
		n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
