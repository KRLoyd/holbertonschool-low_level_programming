#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of dlistint_t list
 *
 * Return: number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t total;
	const dlistint_t *current;

	total = 0;

	for (current = h; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		total++;
	}
	return (total);
}
