#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Entry Point
 * @ptr: pointer to previously allocated memory
 * @old_size: size of the array pointed to by ptr
 * @new_size: size of the array to be returned
 *
 * Description: reallocates a memory block using malloc and free
 * Return: pointer to reallocated memory, NULL if new_size == 0
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *help_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	help_ptr = ptr;
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new_ptr[i] = help_ptr[i];
	else /* if (old_size > new_size) */
		for (i = 0; i < new_size; i++)
			new_ptr[i] = help_ptr[i];
	free(ptr);
	return ((void *)new_ptr);
}
