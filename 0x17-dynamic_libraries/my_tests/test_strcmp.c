#include "holberton.h"
#include <stdio.h>
/**
 * main - check my _strcmp function
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[] = "Welocome";
	char s2[] = "Oddballs!";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s1, s2: %d\n", _strcmp(s1, s2));
	printf("s2, s1: %d\n", _strcmp(s2, s1));
	printf("s1, s1: %d\n", _strcmp(s1, s1));

	return (0);
}
