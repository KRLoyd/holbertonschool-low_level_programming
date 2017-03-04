#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point; add positive numbers
 * @argc: number of arguments passed to main
 * @argv: strings passed to main
 *
 * Return: (0) Success, (1) Failure
 **/

int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	if (argc >= 2)
	{
		for (i = 1 ; i < argc; i++)
		{
			if (*argv[i] >= 'a' && *argv[i] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
		printf("%d\n", result);
		return (0);
	}
}
