#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list, even with a loop
 * @head: list to print
 *
 * Return: number of nodes in the list, upon failure, exit status is 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *check;
	unsigned int counter, loop;

	if (head == NULL)
		exit(98);

	ptr = head;
	counter = 0;

	while (ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		counter++;
		ptr = ptr->next;
		check = head;
		loop = 0;
		while (loop < counter)
		{
			if (ptr->next == check)
			{
				printf("[%p] %d\n", (void *)ptr, ptr->n);
				printf("-> [%p] %d\n", (void *)check, check->n);
				return (counter);
			}
			check = check->next;
			loop++;
		}
	}

	return (counter);
}
