#include "lists.h"
/**
 * reverse_listint - reverses a list_t linked list
 * @head: list to reverse
 * Return: pointer to the first pointer of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *previous;

	temp = *head;
	previous = NULL;

	while (head != NULL && *head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = temp;
	}
	*head = previous;
	return (*head);
}
