#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: length of a string
 **/

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - Entry Point
 * @ac: number of arguments passed to program
 * @av: pointer to arguments passed to program
 *
 * Description: concatinate the arguments of the program
 * Return: pointer to new string (Success), NULL (Failure)
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len, total_len;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		total_len = len + 1;
	}

	p = malloc((total_len + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	/* use int k to count in p as 1D array for 2D info */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
