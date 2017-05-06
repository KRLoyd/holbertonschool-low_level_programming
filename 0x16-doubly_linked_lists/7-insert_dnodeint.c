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
	size_t total_nodes;
	dlistint_t *new_node;
	dlistint_t *ptr;
	unsigned int i;

	ptr = *h;
	i = 0;

/* find number of nodes in the list */
	total_nodes = dlistint_len(ptr);
/* check that index is not more than number of nodes */
	if (idx > total_nodes)
		return (NULL);
/* create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
/* add data to new node */ 
	new_node->n = n;
/* Traverse the linked list to get to idx */
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
/* set new node's next to ptr's next */
	new_node->next = ptr->next;
/* set new node's prev to ptr */
	new_node->prev = ptr;
/* set ptr's next to new node */
	ptr->next = new_node;
	return (new_node);
}
