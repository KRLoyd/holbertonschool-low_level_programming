#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Aleays 0 (Success)
 **/

int main(void)
{
	int i;
	char c;

	i = '0';
	c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
