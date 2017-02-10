#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
**/

int main(void)
{
	int a;
	int b;

	a = '0';
	b = (a + '1');

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if ((a == 8) && (b == 9))
				;
			else
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
