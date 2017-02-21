#include "holberton.h"

/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 *
 **/

void rev_string(char *s)
{
	int i, j;
	int length;
	int temp[1000];

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		temp[i] = s[i];
	}

	for (i = 0, j = length - 1; i < length; i++, j--)
	{
		s[i] = temp[j];
	}
}
