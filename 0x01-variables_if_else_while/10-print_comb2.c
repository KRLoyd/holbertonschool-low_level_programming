#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 57 || b != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
