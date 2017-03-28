#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first element of the list
 * @n: data to copy into new node
 *
 * Return: pointer to the new node (SUCCESS) or NULL (FAILURE)
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_last;
	listint_t *ptr;

	new_last = malloc(sizeof(listint_t));
	if (new_last == NULL)
		return (NULL);
	new_last->n = n;
	new_last->next = NULL;

	ptr = *head;

	if (*head == NULL)
	{
		*head = new_last;
		return (new_last);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_last;
	return (new_last);
}
