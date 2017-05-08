#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the first node in the list
 * @idx: position to add the node
 * @n: data to save in added node
 *
 * Return: address of the new node (SUCCESS), NULL (FAILURE)
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
/*	size_t total_nodes;*/
	dlistint_t *new_node;
	dlistint_t *ptr;
	unsigned int node_num;

	ptr = *h;
	node_num = 0;

/* Check if h and *h are NULL */
	if (h == NULL || *h == NULL)
		return NULL;
/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
/* Add data to new node */ 
	new_node->n = n;
/* Traverse the linked list to get to idx */
	while (ptr != NULL)
	{
		if (idx == node_num + 1)
			break;
		ptr = ptr->next;
		node_num++;
	}
	printf("ptr->n: %d\n", ptr->n);
	printf("idx: %d\nnode_num: %d\n", idx, node_num);

	new_node->prev = ptr->prev;
	new_node->next = ptr->next;
	ptr->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
