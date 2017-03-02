#include "holberton.h"

/**
 * first_is_last - find the first and last elements in string, evaluate if
 * palindrome
 * @first: first element in string
 * @last: last element in string
 *
 * Return: 1 if TRUE, 0 if FALSE
 **/

int first_is_last(char *first, char *last)
{
	if (*first != *last)
	{
		return (0);
	}
	if (first > last)
	{
		return (1);
	}
	if (first == last)
	{
		return (1);
	}
	return (first_is_last(first + 1, last - 1));
}

/**
 * _strlen_recursion - evaluate a string to find it's length
 * @s: string to evaluate
 *
 * Return: length of string
 **/

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = _strlen_recursion(s + 1);
	return (i + 1);
}

/**
 * is_palindrome - function that evaluates if string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 if TRUE, 0 if FALSE
 **/

int is_palindrome(char *s)
{
	int len;
	char *first, *last;

	len = _strlen_recursion(s);
	first = s;
	last = &s[len - 1];
	return (first_is_last(first, last));
}
