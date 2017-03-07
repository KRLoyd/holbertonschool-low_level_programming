#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 *
 * Return: length of string
 **/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	return (i);
}

/**
 * _strdup - Entry Point
 * @str: string to copy to newly allocated space
 *
 * Description: returns a pointer to newly allocated space in memory,
 * contains copy of string given as parameter
 * Return: pointer to duped string (Success), NULL (Failure)
 **/

char *_strdup(char *str)
{
	int j, len;
	char *p;

	if (str == '\0')
		return (NULL);

	len = _strlen(str);

	if (len <= 0)
		return (NULL);

	p = malloc(len * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		for (j = 0; j < len; j++)
		{
			p[j] = str[j];
		}
		p[j] = '\0';
		return ((char *)p);
	}
}
