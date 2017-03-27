#include "lists.h"
/**
 * get_nodeint_at_index - finds nth node of a listint_t list
 * @head: list to evaluate
 * @index: index of node to find
 *
 * Return: node found at index (SUCCESS), NULL if node does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	i = 0;

	while (i < index)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
