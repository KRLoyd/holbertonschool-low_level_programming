#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given position
 * @head: double pointer to the first node in the list
 * @index: node to delete
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_reference;
	dlistint_t *node_to_delete;
	unsigned int node_num;

	node_reference = node_to_delete = *head;
	node_num = 0;
/* Check if head and *head are NULL */
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{		/* Is this the only link? */
		if (node_to_delete->next == NULL)
		{
			free(node_to_delete);
			*head = NULL; return (-1);
		}
		else /* This is link 0 of more */
		{
			*head = node_to_delete->next;
			(*head)->prev = NULL;
			free(node_to_delete); return (1);
		}
	}
/* Traverse the list */
	while (node_num < index - 1)
	{
		node_reference = node_reference->next;
		if (node_reference == NULL)
			return (-1);
		node_num++;
	}
/* Update pointers to remove the node_to_delete */
	node_to_delete = node_reference->next;
	node_reference->next = node_to_delete->next;
/* If node is not the last, make the next node's prev = node_reference */
	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = node_reference;
/* free the node that was "deleted" */
	free(node_to_delete);
	return (1);
}
