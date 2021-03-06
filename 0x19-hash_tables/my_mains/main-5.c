#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	/* Test Case 0: Print Empty Has Table */
	/* hash_table_print(ht); */

	/* Test Case 0: All NULL */
	/* ht = NULL; */
	/* hash_table_print(ht); */

	/* Test Case 1: Single Nodes */ 
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_print(ht);

	/* Test Case 2: A Chain */
	hash_table_set(ht, "stylist", "original collision");
	hash_table_set(ht, "subgenera", "new collision");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
