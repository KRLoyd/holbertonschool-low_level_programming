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

	unsigned int i;
	dlistint_t *ptr;

	i = 0;
	ptr = head;

/* Check if head == NULL */
	if (head == NULL)
		return (NULL);
/* Traverse the list to index and return if index exists */
	while (ptr != NULL)
	{
		if (index == i)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
/* Return NULL if index not found */
	return (NULL);
}
