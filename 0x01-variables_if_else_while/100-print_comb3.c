#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
	int a, b;

	a = '0';

	while (a <= '9')
	{
		b = (a + 1);

		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (!(a == '8' && b == '9'))
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
