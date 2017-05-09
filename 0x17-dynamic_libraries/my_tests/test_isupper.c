#include "holberton.h"
/**
 * main - check my _isupper function
 *
 * Description: expected results are 1001
 * Return: Always 0
 */
int main(void)
{
	int r; 

	r = _isupper('L');
	_putchar(r + '0');

	r = _isupper('o');
	_putchar(r + '0');

/* ASCII value for 0 */
	r = _isupper(48);
	_putchar(r + '0');

/* ASCII value for K */
	r = _isupper(75);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
