#include "holberton.h"
/**
 * main - check my _isalpha function
 *
 * Description: expected results are 1010
 * Return: Always 0
 */
int main(void)
{
	int i; 

        i = _isalpha('K');
	_putchar(i + '0');

	i = _isalpha(' ');
	_putchar(i + '0');

/* ASCII value for r */
	i = _isalpha(114);
	_putchar(i + '0');

/* ASCII value for ! */
	i = _isalpha(33);
	_putchar(i + '0');

	_putchar('\n');
	return (0);
}
