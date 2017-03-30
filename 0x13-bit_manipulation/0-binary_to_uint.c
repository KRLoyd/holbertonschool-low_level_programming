#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string made of chars 0 and 1
 *
 * Return: the converted number (SUCCESS), or 0 (FAILURE)
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, flip;

	num = 0;
	flip = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] == '1')
		{
			while (num & flip)
			{
				num = num ^ flip;
				flip <<= 1;
			}
			num = num ^ flip;
		}
	}
	return (num);
}
