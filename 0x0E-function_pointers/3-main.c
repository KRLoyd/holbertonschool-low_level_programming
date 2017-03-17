#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	answer = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", answer);
	return (0);
}
