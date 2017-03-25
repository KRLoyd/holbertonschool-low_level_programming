#include "lists.h"
/**
 * list_len - finds the number of elements of a list_t list
 * @h: list_t list to evaluate
 *
 * Return: number of elements in list
 **/

size_t list_len(const list_t *h)
{
	unsigned int totel;
	const struct list_s *temp;

	totel = 0;
	temp = h;

	while (temp != NULL)
	{
		totel++;
		temp = temp->next;
	}
	return (totel);
}
