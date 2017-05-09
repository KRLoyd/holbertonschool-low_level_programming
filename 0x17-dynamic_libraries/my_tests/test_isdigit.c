#include "holberton.h"
/**
 * main - check my _isdigit function
 *
 * Description: expected results are 0011
 * Return: Always 0
 */
int main(void)
{
	int i; 

        i = _isdigit('0');
	_putchar(i + '0');

/* ASCII value for 8 */
	i = _isdigit(56);
	_putchar(i + '0');


	i = _isdigit('A');
	_putchar(i + '0');

/* ASCII value for q */
	i = _isdigit(113);
	_putchar(i + '0');

	_putchar('\n');
	return (0);
}
