#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node (index begins at 0)
 *
 * Return: nth node of the list, NULL if it doesn't exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int total_nodes;

	printf("Index: %d\n", index);
	printf("Before finding number of nodes\n");
/* Find number of nodes in list */
	total_nodes = dlistint_len(head);
	printf("Total_nodes: %d\n", total_nodes);

	printf("Before if comparing index to number of nodes\n");
/* Compare index to number of nodes */
	if (index > total_nodes)
	{
		printf("inside if statement\n");
		return (NULL);
	}
/* Traverse the list to index */

/* Return node at index */

	return (0);
}
