#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0 (Success)
 **/

int main(void)
{
	int a, b;

	a = 0;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 % 10 + '0');
			putchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
