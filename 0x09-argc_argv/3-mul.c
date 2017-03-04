#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry Point, mulitplies two numbers
 * @argc: argument count
 * @argv: stings passed to main
 *
 * Return: (0) Success, (1) Failure
 **/

int main(int argc, char *argv[])
{
	int mul;
	int i;

	mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
