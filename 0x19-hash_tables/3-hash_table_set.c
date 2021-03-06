#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table to add to/update key/value pair
 * @key: key, may be an empty string
 * @value: value associated with key, may be an empty string
 * Return: 1 (SUCCESS), 0 (FAILURE)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr;
	hash_node_t *new_node;
	unsigned int collision_check, key_check;

	if ((ht == NULL) || (key == NULL) || (value == NULL)
	    || (strlen(key) == 0))
		return (0);

	index = key_index((const unsigned char *)key, (unsigned long int) ht->size);

	ptr = ht->array[index];
	collision_check = check_for_collision(ptr);
	/* if no collisions */
	if (collision_check == 0)
	{
		new_node = add_hash_node(ptr, key, value);
		if (new_node == NULL)
			return (0);
		/* set index head to new_node */
		ht->array[index] = new_node;
		return (1);
	}
	/* if there are collisions */
	key_check = check_for_key(ptr, key, value);
	if (key_check == 1)
		return (1);

	/* if key doesn't exist, add it */
	else if (key_check == 0)
	{
		new_node = add_hash_node(ptr, key, value);
		if (new_node == NULL)
			return (0);
		/* set index head to new_node */
		ht->array[index] = new_node;
		return (1);
	}
	else
		return (0);
}

/**
 * check_for_collision - checks if there is a collision at a given index
 *
 * @ptr: pointer to the linked list of hash nodes
 * Return: 0 (no collisions), 1 (collision exists)
 */

unsigned int check_for_collision(hash_node_t *ptr)
{
	if (ptr == NULL)
		return (0);
	return (1);
}

/**
 * check_for_key - checks if a key exists in a specific index of a hash table
 * If the key exists, it's value is updated.
 *
 * @ptr: pointer to the first node in the list
 * @key: key to check for
 * @value: value to update key's value if key is found
 * Return: 0 (key doesn't exist), 1 (key does exist)
 */
unsigned int check_for_key(hash_node_t *ptr,
			   const char *key, const char *value)
{
	hash_node_t *temp;
	char *value_to_free;

	temp = ptr;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value_to_free = temp->value;
			temp->value = strdup(value);
			if (temp->value == NULL)
				free(temp->value);
			free(value_to_free);
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}

/**
 * add_hash_node - adds a new node to the beginning of a linked list
 *
 * @ptr: pointer to the linked list
 * @key: key to be added
 * @value: value to be associated with key
 * Return: pointer to the new_node (SUCCESS), NULL (FAILURE)
 */
hash_node_t *add_hash_node(hash_node_t *ptr,
			   const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp;

	temp = ptr;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);


	new_node->key = strdup(key);
	if (new_node->key == NULL)
		free(new_node->key);


	new_node->value = strdup(value);
	if (new_node->value == NULL)
		free(new_node->value);
	new_node->next = temp;
	return (new_node);
}
