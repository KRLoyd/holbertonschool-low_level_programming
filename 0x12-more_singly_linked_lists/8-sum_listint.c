#include "lists.h"
/**
 * sum_listint - adds the n data in all nodes of a listint_t list
 * @head: list to evaluate
 *
 * Return: sum of all n data in list (SUCCESS), 0 if list is empty
 **/
int sum_listint(listint_t *head)
{
	int totsum;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	totsum = 0;
	ptr = head;

	while (ptr != NULL)
	{
		totsum += ptr->n;
		ptr = ptr->next;
	}
	return (totsum);
}
