#include "holberton.h"
#include <stdio.h>
/**
 * main - test my _abs function
 *
 * Return: Always 0
 */
int main (void)
{
	int i;

	i = _abs(1);
	printf("%d\n", i);
	i = _abs(0);
	printf("%d\n", i);
	i = _abs(-1);
	printf("%d\n", i);
	i = _abs(-8675309);
	printf("%d\n", i);

	return (0);
}
