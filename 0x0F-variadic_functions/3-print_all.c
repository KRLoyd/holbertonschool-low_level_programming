#include "variadic_functions.h"

/**
 * print_char - function to print characters
 * @sep: string to separate this output from others
 * @alist: list of arguments passed
 *
 * Return: char
 */

void print_char(char *sep, va_list alist)
{
	printf("%s%c", sep, va_arg(alist, int));
}

/**
 * print_int - function to print integers
 * @sep: string to separate this output from others
 * @alist: list of arguments passed
 *
 * Return: integer
 */

void print_int(char *sep, va_list alist)
{
	printf("%s%d", sep, va_arg(alist, int));
}

/**
 * print_float - function to print floats
 * @sep: string to separate this output from others
 * @alist: list of arguments passed
 *
 * Return: float
 */

void print_float(char *sep, va_list alist)
{
	printf("%s%f", sep, va_arg(alist, double));
}

/**
 * print_string - function to print strings
 * @sep: string to separate this output from others
 * @alist: list of arguments passed
 *
 * Return: string
 */

void print_string(char *sep, va_list alist)
{
	char *s;

	s = va_arg(alist, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	printf("%s%s", sep, s);
}

/**
 * print_all - function that prints anything (of types c, i, f, and s)
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list alist;
	char *sep;

	find_type print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	i = 0;
	sep = "";

	va_start(alist, format);


	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (print[j].c != NULL)
		{
			if (format[i] == print[j].c[0])
			{
				print[j].f(sep, alist);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(alist);
}
