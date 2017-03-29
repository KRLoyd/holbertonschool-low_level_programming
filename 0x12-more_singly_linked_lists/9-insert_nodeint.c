#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at idx of a listint_t list
 * @head: list to add node to
 * @idx: index where new node is added
 * @n: data to copy into the new node
 *
 * Return: pointer to new node (SUCCESS) or NULL (FAILURE)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next =  *head;
		*head = new_node;
		return (new_node);
	}
	else /* idx != 0 */
	{
		if (head == NULL && *head == NULL)
			free(new_node);	return (NULL);
	}

	i = 0;
	ptr = *head;

	while (i < (idx - 1))
	{
		if (ptr->next == NULL)
		{
			free(new_node);
			return (NULL);
			}
		ptr = ptr->next;
		i++;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
