#include "holberton.h"
#include <stdio.h>
/**
 * main - check code for _strspn
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
