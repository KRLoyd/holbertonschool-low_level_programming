#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int print_hash_chain(hash_table_t **ht);

/**
 * main - check the code for HOlberton School students.
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	int print_return;
	/* hash_node_t *ptr; */

	ht = hash_table_create(1024);
	printf("main main: ht created\n");
	hash_table_set(ht, "betty", "holberton");
	/* index for betty is 173 */
	print_return = print_hash_chain(&ht);
	if (print_return == 0)
		printf("hash chain printed\n");

	return (EXIT_SUCCESS);



}

int print_hash_chain(hash_table_t **ht)
{

	printf("printing hash chain\n");
	printf("%s\n", (*ht)->array[173]->key);
	printf("%s\n", (*ht)->array[173]->value);
	printf("-------------\n");
	printf("%s\n", ((*ht)->array[173]->next)->key);
	printf("%s\n", ((*ht)->array[173]->next)->value);

	return (0);

}
