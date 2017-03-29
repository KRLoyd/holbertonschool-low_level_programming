#include "lists.h"
/**
 * free_listint2 - free a listint_t list and reset head to NULL
 * @head: first element in listint_t list
 **/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head != NULL && *head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
