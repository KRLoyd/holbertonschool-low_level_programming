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

	unsigned int total_nodes, i;
	dlistint_t *ptr;

	i = 0;
	ptr = head;

/* Check if head == NULL */
	if (head == NULL)
		return (NULL);
/* Find number of nodes in list */
	total_nodes = dlistint_len(head);
/* Compare index to number of nodes */
	if (index > total_nodes)
		return (NULL);
/* Traverse the list to index */
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
/* Return node at index */
	return (ptr);
}
