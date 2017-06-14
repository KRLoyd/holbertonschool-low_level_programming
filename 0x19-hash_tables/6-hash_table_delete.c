#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	/* check if ht is NULL */
	if (ht == NULL)
		return;

	/* loop through the array */
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list of hash_node_t elements
 *
 * @ptr: linked list to free
 */
void free_list(hash_node_t *ptr)
{
	hash_node_t *temp;
	hash_node_t *del;

	temp = ptr;

	while (temp != NULL)
	{
		free(temp->key);
		free(temp->value);
		del = temp;
		temp = temp->next;
		free(del);
	}
}
