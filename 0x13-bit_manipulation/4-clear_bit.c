#include "holberton.h"
/**
 * clear_bit - sets the value of bit at index to 0
 * @n: pointer to the number passed by calling function
 * @index: index of the bit to change
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max, mask;

	if (n == NULL)
		return (-1);

	max = ((sizeof(unsigned long int) * 8) - 1);

	if (index > max)
		return (-1);

	mask = 1 << index;
	(*n) = ~(mask) & (*n);
	return (1);
}
