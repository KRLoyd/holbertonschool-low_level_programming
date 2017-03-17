#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @s: strint to evaluate
 *
 * Return: length of string
 **/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	i++; /* add 1 to account for '\0' */
	return (i);
}

/**
 * new_strcpy - copy second string to buffer of first string
 * @dest: pointer to empty dest
 * @src: string to copy
 *
 * Return: pointer to dest
 **/

char *new_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to new struct dog_t (SUCCESS), NULL (FAILURE)
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *good_boy;
	unsigned int lenn; /*length of name*/
	unsigned int leno; /*length of owner*/

	lenn = _strlen(name);
	leno = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	good_boy = malloc(sizeof(dog_t));
	if (good_boy == NULL)
	{
		free(good_boy); return (NULL);
	}
	if (good_boy != NULL)
	{
		good_boy->name = malloc(lenn);
		if (good_boy->name == NULL)
		{
			free(good_boy); return (NULL);
		}
		if (good_boy->name != NULL)
		{
			good_boy->owner = malloc(leno);
			if (good_boy->owner == NULL)
			{
				free(good_boy->name);
				free(good_boy);
				return (NULL);
			}
			if (good_boy->owner != NULL)
			{
				good_boy->age = age;
				new_strcpy(good_boy->name, name);
				new_strcpy(good_boy->owner, owner);
			}
		}
	}
	return (good_boy);
}
