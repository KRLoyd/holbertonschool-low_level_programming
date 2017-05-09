#include "holberton.h"
#include <stdio.h>
/**
 * main - test my _strlen function
 *
 * Description: expected result is 7
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "Kristen";
	len = _strlen(str);
	printf("%d\t%s\n", len, str);
	return (0);
}
