#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the first node
 * @n: data for the new node
 *
 * Return: address of the new element (SUCCESS), NULL (FAILURE)
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_last;
	dlistint_t *current;

	current = *head;

/* malloc space for the new node */
	new_last = malloc(sizeof(dlistint_t));
	if (new_last == NULL)
		return (NULL);
	printf("after malloc space for new_last\n");
/* add data to new_last */
	new_last->n = n;
	printf("new_last->n: %d\n", new_last->n);
	new_last->prev = current;
	new_last->next = NULL;

/* check for empty list */
	printf("Right before if check for empty list\n");
	if (*head == NULL)
	{
		printf("Inside if check for empty list\n");
		*head = new_last;
	}
/* make last node point to new node*/
	else
	{
		while (current->next != NULL)
		{
			new_last->prev = current;
			current = current->next;
		}
		current->next = new_last;
	}
	return (new_last);
}
