#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list and sets head to NULL
 * @h: listint_t list to free
 *
 * Return: size of the list that was free'd
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	listint_t *check;
	listint_t *first;
	size_t counter;
	unsigned int loop;

	first = *h;
	counter = 0;

	while (h && *h)
	{
		ptr = *h;
		*h = (*h)->next;
		free (ptr);
		loop = 0;
		check = first;
		while (loop < counter)
		{
			if (*h == check)
			{
				return (counter);
			}
			check = check->next;
			loop++;
		}
	}
	return (counter);
}
