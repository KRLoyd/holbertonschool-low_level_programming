#include "lists.h"
/**
 * pop_listint - deletes the first node of a listint_t list
 * @head: listint_t list
 *
 * Return: data in deleted node (SUCCESS), 0 (FAILURE)
 **/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
