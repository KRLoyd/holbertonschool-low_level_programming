#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: double pointer to head of the list
 * @n: data for the new node
 *
 * Return: address of the new element (SUCCESS), NULL (FAILURE)
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	*head = new;

	return (new);
}
