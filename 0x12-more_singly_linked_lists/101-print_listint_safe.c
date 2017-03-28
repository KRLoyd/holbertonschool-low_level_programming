#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list, even with a loop
 * @head: list to print
 *
 * Return: number of nodes in the list, upon failure, exit status is 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	unsigned int counter;
	int data;

	ptr = head;
	counter = 0;

	while (ptr->next != head)
	{
		data = ptr->n;
		printf("[%o] %d\n", &ptr, data);
		counter++;
		ptr = ptr->next;
	}
	return (head);
}
