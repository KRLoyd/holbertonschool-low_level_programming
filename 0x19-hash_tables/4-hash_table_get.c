#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to look in for key
 * @key: key you are looking for
 * Return: value associated with key (SUCCESS), NULL (FAILURE, can't find key)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	long unsigned int index;

	/* check if ht and key are NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* find index of key */
	index = key_index((const unsigned char *)key, (unsigned long int) ht->size);

	/* set ptr to correct index of array */
	ptr = ht->array[index];

	/* loop through the linked list of nodes */
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
