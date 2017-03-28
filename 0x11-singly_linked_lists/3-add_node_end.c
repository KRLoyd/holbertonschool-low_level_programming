#include "lists.h"
#include <string.h>
/**
 * _strlen_const - return the length of a string
 * @s: string to evaluate
 *
 * Return: length of s
 */
int _strlen_const(const char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first element of the list
 * @str: string to be duplicated in new node
 *
 * Return: address of the new node (SUCCESS), NULL (FAILURE)
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_last;
	list_t *temp;

	temp = *head;

	new_last = malloc(sizeof(list_t));
	if (new_last == NULL)
		return (NULL);

	new_last->str = strdup(str);
	if (new_last->str == NULL)
	{
		free(new_last);
		return (NULL);
	}
	new_last->len = _strlen_const(str);
	new_last->next = NULL;

	if (*head == NULL)
	{
		*head = new_last;
		return (new_last);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_last;

	return (new_last);
}
