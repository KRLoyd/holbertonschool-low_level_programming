#include "hash_tables.h"

/**
 * key_index - gives the index of input key
 *
 * @key: key to evaluate
 * @size: size of the array of the hash table
 * Return: index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int d_code;
	unsigned long int index_num;

	d_code = hash_djb2(key);
	index_num = d_code % size;
	return (index_num);
}
