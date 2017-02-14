#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int i = '0', j;

	while (i <= '9')
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
	return (0);
}
