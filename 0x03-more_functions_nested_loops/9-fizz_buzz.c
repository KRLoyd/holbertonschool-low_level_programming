#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Fizz-Buzz test: print 1 to 100, if divisible by
 * 3, print Fizz, if divisible by 5, print Buzz, if divisible by
 * both, print FizzBuzz
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	char n;
	char div3;
	char div5;

	printf("1");

	for (n = 2; n <= 100; n++)
	{
		div3 = n % 3;
		div5 = n % 5;

		if (div3 == 0 && div5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (div3 == 0 && div5 != 0)
		{
			printf(" Fizz");
		}
		else if (div3 != 0 && div5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
