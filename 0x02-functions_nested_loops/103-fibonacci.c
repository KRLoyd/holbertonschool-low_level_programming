#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the sum of even-valued Fibonacci terms up to 4000000
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	long first;
	long second;
	long sum;
	long totsum;

	first = 1;
	second = 1;
	totsum = 0;
	sum = first + second;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			totsum += sum;
			first = second;
			second = sum;
		}
		else
		{
			first = second;
			second = sum;
		}
	}
	printf("%lu\n", totsum);
	return (0);
}
