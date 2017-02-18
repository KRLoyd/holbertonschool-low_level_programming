 #include <stdio.h>

/**
 * main - entry point
 * Description: find and print the largest prime factor of 612852475143
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	long int num;
	long int prime;

	num = 612852475143;
	prime = 2;

	while (prime <= num)
	{
		if (num % prime == 0)
		{
			num = num / prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%lu\n", prime);
	return (0);
}
