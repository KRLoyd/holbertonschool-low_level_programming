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
	dlistint_t *new_node;
	dlistint_t *ptr;
	unsigned int node_num;

	ptr = *h;
	node_num = 0;
/* Check if h is NULL */
	if (h == NULL)
		return (NULL);
/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
/* Add data to new node */
	new_node->n = n;
/* if idx == 0 */
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
/* Traverse the linked list to get to idx */
	while (ptr != NULL)
	{
/* If idx is found, update pointers and return */
		if (idx == node_num + 1)
		{
			new_node->prev = ptr->prev;
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		node_num++;
	}
/* If idx not found, return NULL */
	return (NULL);
}
