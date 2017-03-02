#include "holberton.h"

/**
 * find_prime - find if the number is prime past 2
 * @i: number to check n
 * @n: number to find if prime
 *
 * Return: 1 if prime, 0 if not prime
 **/

int find_prime(int i, int n)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	return (find_prime(i + 1, n));
}

/**
 * is_prime_number - function to evaluate if number is prime
 * @n: number to evaluate
 *
 * Return: 1 if prime, 0 if not prime
 **/

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (find_prime(i, n));
}
