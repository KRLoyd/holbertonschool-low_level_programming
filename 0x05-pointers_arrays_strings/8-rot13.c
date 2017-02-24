#include "holberton.h"

/**
 * rot13 - encode a string using ROT13
 * @s: string to encode
 *
 * Return: encoded string
 **/

char *rot13(char *s)
{
	int i;
	int j;
	char *rota;
	char *rotb;

	rota = "abcdefghijklmABCDEFGHIJKLM";
	rotb = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rota[j] != '\0'; j++)
		{
			if (s[i] == rota[j])
			{
				s[i] = rotb[j];
			}
			else if (s[i] == rotb[j])
			{
				s[i] = rota[j];
			}
		}
	}
	return (s);
}
