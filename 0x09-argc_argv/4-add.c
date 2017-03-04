#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _checkfornumber - check if a characher is a number
 * @c: character to check
 *
 * Return: (0) Success, (1) Failure
 **/

int _checkfornumber(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (isdigit(c[i]) == 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

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

	for (i = 1 ; i < argc; i++)
	{
		if (_checkfornumber(argv[i]) == 0)
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
