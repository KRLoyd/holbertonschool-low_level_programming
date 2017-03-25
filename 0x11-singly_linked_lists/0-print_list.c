#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: list_t list to print
 *
 * Return: number of elements in list
 **/

size_t print_list(const list_t *h)
{
	unsigned int totel;
	const struct list_t *temp;

	totel = 0;
	temp = h;

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		totel++;
		temp = temp->next;
	}
	return (totel);
}
