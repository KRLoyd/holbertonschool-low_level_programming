#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table of specified size
 *
 * @size: size of the array
 * Returns: pointer to new hash_table (SUCCESS), NULL (FAILURE)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	/* Allocate  space for the hash_table */
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	/* Allocate space for the array */
	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	return (new_ht);
}
