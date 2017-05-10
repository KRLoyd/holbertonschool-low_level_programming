#include "lists.h"

/**
 * print_rev - prints all elements of a dlistint_t list in reverse
 * @h: pointer to head of dlistint_t list
 *
 * Return: number of nodes in the list
 **/
size_t print_rev(const dlistint_t *h)
{
	size_t total;
	const dlistint_t *current;

	total = 0;
/* Traverse list until current is the last node and count nodes*/
	for (current = h; current->next != NULL; current = current->next)
	{
		total++;
	}
	total++;
	printf("After traversing, data in last element is: %d\n", current->n);
/* Print the list in reverse */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	return (total);
}
