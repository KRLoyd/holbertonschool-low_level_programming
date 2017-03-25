#include "lists.h"

/**
 * free_list - frees list_t lists
 * @head: list to free
 **/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
