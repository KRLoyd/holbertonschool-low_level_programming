#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index, used_table_size;
	hash_node_t *list_ptr;
	hash_node_t *array_ptr;

	if (ht == NULL)
		return;

	/* find number of non-NULL lists in array */
	for (used_table_size = 0, index = 0, array_ptr = ht->array[index];
	     index < ht->size;)
	{
		if (array_ptr != NULL)
			used_table_size++;
		index++;
		array_ptr = ht->array[index];
	}
	/* check if all lists are NULL */
	if (used_table_size == 0)
	{
		printf("\n");
		return;
	}
	/* toop through array of lists is not all NULL */
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
			used_table_size -= 1;
		if (index == 0)
			printf("{");
		/* loop through the nodes in the linked list */
		for (list_ptr = ht->array[index];
		     list_ptr != NULL; list_ptr = list_ptr->next)
		{
			printf("'%s': '%s'", list_ptr->key, list_ptr->value);
			if (used_table_size > 0)
				printf(", ");
		}
		if (index == ht->size - 1)
			printf("}\n");
	}
}
