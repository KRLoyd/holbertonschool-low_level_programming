#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int used_table_size, checker;
	hash_node_t *l_ptr;
	hash_node_t *array_ptr;

	if (ht->array == NULL || ht == NULL)
		return;
	checker = 0;
	for (used_table_size = 0, i = 0; i < ht->size;)
	{
		array_ptr = ht->array[i];
		if (array_ptr != NULL)
			used_table_size++;

		array_ptr = ht->array[i];
		i++;
	}
	if (used_table_size == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (i == 0)
			printf("{");
		if (ht->array[i] != NULL)
			used_table_size -= 1;
		for (l_ptr = ht->array[i]; l_ptr != NULL; l_ptr = l_ptr->next)
		{
			if (checker == 1)
				printf(", ");
			printf("'%s': '%s'", l_ptr->key, l_ptr->value);
			checker = 1;
		}
		if (i == ht->size - 1)
			printf("}\n");
	}
}
