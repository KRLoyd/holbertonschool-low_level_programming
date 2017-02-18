#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int i;
	long int first;
	long int second;
	long int sum;

	first = 1;
	second = 2;
	sum = first + second;

	printf("1, 2");
	for (i = 2; i <= 98; i++)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
