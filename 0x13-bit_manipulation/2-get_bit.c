#include "holberton.h"
/**
 * get_bit: finds the value of a bit at a given index
 * @n: integer to evaluate
 * @index: index of bit to find, index starts at 0
 *
 * Return: value of bit at index (SUCCESS), -1 (FAILURE)
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int copy;

	if (index > 31)
		return (-1);

	copy = n >> index;
	if (copy & 1)
		return (1);
	else
		return (0);
}
