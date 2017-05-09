#include "holberton.h"
/**
 * main - check my _islower function
 *
 * Description: expected results are 0110
 * Return: Always 0
 */
int main(void)
{
	int r; 

	r = _islower('H');
	_putchar(r + '0');

	r = _islower('o');
	_putchar(r + '0');

/* ASCII value for l */
	r = _islower(108);
	_putchar(r + '0');

/* ASCII value for ! */
	r = _islower(33);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
