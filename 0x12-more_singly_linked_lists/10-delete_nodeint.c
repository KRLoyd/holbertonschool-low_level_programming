#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index in a listint_t list
 * @head: list
 * @index: node to delete from list
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	i = 0;
	temp = *head;
	ptr = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < (index -1))
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	i = 0;
	while (i < index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	ptr->next = temp->next;
	free(temp);

  	return (1);
}
