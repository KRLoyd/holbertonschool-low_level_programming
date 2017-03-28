#include "lists.h"
#include <string.h>
/**
 * _strlen_const - return the length of a string
 * @s: string to evlauate
 *
 * Return: length of string
 **/

int _strlen_const(const char *s)
{
	int i;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first element in the list
 * @str: string to be duplicated to new node
 *
 * Return: address of new element (SUCCESS), NULL (FAILURE)
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_const(str);
	new->next = *head;
	*head = new;

	return (new);
}
