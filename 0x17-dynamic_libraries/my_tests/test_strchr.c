#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for _strchr
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("%s\n", f);
	return (0);
}
