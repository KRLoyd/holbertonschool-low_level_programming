#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point, print arguments
 * @argc: number of args passed to main
 * @argv: strings passed to main
 *
 * Return: (0) Success
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
