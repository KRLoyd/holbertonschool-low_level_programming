#include "lists.h"
/**
 * free_listint2 - free a listint_t list and reset head to NULL
 * @head: first element in listint_t list
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free (temp);
	}
	head = NULL;
}
