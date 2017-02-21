#include "holberton.h"

/**
 * puts_half - print the last half of a string
 * @str: string to evaluate
 *
 **/

void puts_half(char *str)
{
	int i;
	int c;
	int n;

	while (str[c] != '\0')
	{
		c++;
	}
	c++;
	n = c / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
