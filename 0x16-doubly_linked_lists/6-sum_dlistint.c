#include "lists.h"
/**
 * sum_dlistint - adds all the data (n) of a dlistint_t linked list
 * @head: pointer to the first link in the list
 *
 * Return: sum of all data, 0 if empty list
 **/
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *ptr;
	int total_sum;

	total_sum = 0;
	ptr = head;
/* Check if list is empty */
	if (head == NULL)
		return (total_sum);
/* Traverse the linked list and add data */
	while (ptr != NULL)
	{
		total_sum = total_sum + ptr->n;
		ptr = ptr->next;
	}
/* Return total sum */
	return (total_sum);
}
