#include "hash_tables.h"
/**
 * hash_djb2 - hash function that implements the djb2 algorithm
 *
 * @str: Key to evaluate
 * Return: unsigned long int associated with input key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;



	hash = 5381;
	while ((c = *str++) != 0)
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
