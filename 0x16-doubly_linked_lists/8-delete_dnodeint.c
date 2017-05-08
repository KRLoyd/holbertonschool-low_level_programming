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

	node_reference = *head;
	node_to_delete = *head;
/* Check if head and *head are NULL */
	if (head == NULL || *head == NULL)
		return (-1);
/* If index == 0 */
	printf("\tBefore check for index == 0\n");
	if (index == 0)
	{
		printf("\tIndex == 0\n");
		/* Is this the only link? */
		if (node_to_delete->next == NULL)
		{
			free(node_to_delete);
			*head = NULL;
			return (-1);
		}
		else /* This is link 0 of more */
		{
			*head = node_to_delete->next;
			(*head)->prev = NULL;
			free(node_to_delete);
			return (1);
		}
	}
/* Is this the only link? */
/* Traverse the list */
/* Is it the last link? */
	return (1);
}
