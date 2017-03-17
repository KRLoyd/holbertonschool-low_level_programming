#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all passed arguments
 * @n: number of parameters passed
 *
 * Return: sum of all passed arguments
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}

	va_end(arglist);
	return (sum);
}
