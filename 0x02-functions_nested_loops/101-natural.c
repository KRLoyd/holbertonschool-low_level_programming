#include <stdio.h>
/**
 * main - entry point
 *
 * Desciption: print sum of all digits divisible by 3 or 5, up to 1024
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	int count;
	int div3;
	int div5;
	int sum;

	sum = 0;
	for (count = 0; count < 1024; count++)
	{
		div3 = count % 3;
		div5 = count % 5;

		if (div3 == 0 || div5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
