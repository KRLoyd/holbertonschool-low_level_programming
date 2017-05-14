#include "holberton.h"
#include <stdio.h>

/**
 * main - check my _strcat
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[100] = "Hello ";
	char s2[] = "San Francsico!\n";
	char *p;

	/* Print each string seperately */
	printf("%s\n", s1);
	printf("%s", s2);
	/* Concatenate s2 to s1 */
	p = _strcat(s1, s2);
	printf("%s", p);
	return (0);
}
