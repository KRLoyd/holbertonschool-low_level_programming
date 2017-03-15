#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subract 2 numbers
 * @a: first number
 * @b: second number
 * Return: different of a and b
 **/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 **/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 * Return:result of division of a by b
 **/

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo  2 numbers
 * @a: first number
 * @b: second number
 * Return: remainder of the division of a by b
 **/

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
