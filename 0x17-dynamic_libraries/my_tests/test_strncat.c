#include "holberton.h"
#include <stdio.h>

/**
 * main - check my _strncat
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[100] = "Wake up ";
	char s2[] = "California!\n";
	char *p;

	/* Print each string seperately */
	printf("s1: %s\n", s1);
	printf("s2: %s", s2);
	/* Concatenate s2 to s1 to 1st byte*/
	p = _strncat(s1, s2, 1);
	printf("Test n = 1: %s\n", p);
	/* Concatenate s2 to s1 to 1024th byte*/
	p = _strncat(s1, s2, 1024);
	printf("Test n = 1024:%s", p);

	return (0);
}
