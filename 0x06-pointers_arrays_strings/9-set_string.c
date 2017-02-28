#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to set value of
 * @to: pointer to char to set value of s
 **/

void set_string(char **s, char *to)
{
	*s = to;
}
