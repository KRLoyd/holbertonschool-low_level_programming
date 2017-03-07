#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point: print the min number of coins to make change
 * @argc: argument count
 * @argv: arguments passed to main
 *
 * Return: (0) Success, (1) Failure
 **/

int main(int argc, char *argv[])
{
	int count, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	count = 0;
	while (num > 0)
	{
		while (num >= 25)
		{
			num -= 25; count++;
		}
		while (num > 9)
		{
			num -= 10; count++;
		}
		while (num > 4)
		{
			num -= 5; count++;
		}
		while (num > 1)
		{
			num -= 2; count++;
		}
		while (num > 0)
		{
			num -= 1; count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
