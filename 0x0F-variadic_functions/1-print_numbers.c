#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of integers to be passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;
	int j;

	va_start(numlist, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(numlist, int);
		printf("%d", j);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numlist);
}
