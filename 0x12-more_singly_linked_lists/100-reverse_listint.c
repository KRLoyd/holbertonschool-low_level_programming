#include "lists.h"
/**
 * reverse_listint - reverses a list_t linked list
 * @head: list to reverse
 * Return: pointer to the first pointer of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		current->next = prev;
		prev = current;
	}
	*head = prev;
	return (*head);
}
