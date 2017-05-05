#include "lists.h"
/**
 * dlistint_len - retruns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements of a linked list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t total;

	total = 0;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		total++;
	}
	return (total);
}
