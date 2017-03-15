#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: function to print name with
 *
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
