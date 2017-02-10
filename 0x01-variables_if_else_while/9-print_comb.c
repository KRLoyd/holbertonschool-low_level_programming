#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i;

	i = '0';

	while (i <= '8')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	while (i == '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
