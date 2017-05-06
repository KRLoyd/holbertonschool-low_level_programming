#include "lists.h"
/**
 * get_dnoeint_at_index - finds the nth node of a dlistint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node (index begins at 0)
 *
 * Return: nth node of the list (SUCCESS), NULL (FAILURE)
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t total_nodes;
	dlistint_t *ptr;
	unsigned int i;

	i = 0;
	ptr = head;
/* find number of nodes in the list */
	total_nodes = dlistint_len(head);

/* check if index is out of range */
	if (index > total_nodes)
		return (NULL);

/* Traverse list until index */
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
/* return index node */
	return (ptr);
}
