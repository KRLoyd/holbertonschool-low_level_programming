#include "lists.h"
/**
 * listint_len - counts the number of elements in a listint_t list
 * @h: list to evaluate
 *
 * Return: number of elements in a listint_t list
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter;

	counter = 0;
	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
