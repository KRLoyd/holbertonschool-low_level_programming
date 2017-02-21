#include "holberton.h"

/**
 * puts2 - prints first char out of 2 in a string
 * @str:string to evaluate
 *
 **/

void puts2(char *str)
{
	int i;
	int c;

	i = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	while (i <= c)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
