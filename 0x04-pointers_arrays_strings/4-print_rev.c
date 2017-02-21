#include "holberton.h"

/**
 * print_rev - function to print a string in reverse
 * @s: string to print
 *
 **/

void print_rev(char *s)
{
	int i;
	int c;

/* count number of characters in array and save in value c */
	while (s[c] != '\0')
	{
		c++;
	}

/* output the string of text, starting at value c */
	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
