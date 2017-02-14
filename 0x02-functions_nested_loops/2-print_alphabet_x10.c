#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * @void: no input
 *
 * Return: none
 **/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
