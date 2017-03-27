#include "lists.h"

/**
 * print_listint - prints the elements f a listint_t list
 * @h: listint_t list to evaluate
 *
 * Return: number of nodes in the list
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
