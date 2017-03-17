#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of strings to be passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;
	char *string;

	va_start(strlist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strlist, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strlist);
}
