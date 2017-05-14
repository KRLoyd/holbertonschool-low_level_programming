#include "holberton.h"
#include <stdio.h>

/**
 * main - check my _strncpy function
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 100 - 1; i++)
		s1[i] = '*';
	s1[i] = '\0';
	printf("s1: %s\n", s1);
/* n = 5 */
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("s1: %s\n", s1);
	printf("n = 5 p: %s\n", p);
/* n = 90 */
	p = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("s1: %s", s1);
	printf("n = 90 p: %s", p);

	return (0);
}
