#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the frist 50 Fibonacci numbers,
 *starting with 1 and 2
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	long first;
	long second;
	long sum;

	first = 1;
	second = 2;
	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
