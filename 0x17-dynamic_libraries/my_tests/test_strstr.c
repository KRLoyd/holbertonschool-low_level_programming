#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for _strstr
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
