#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int, initialized at 0
 * @width: # of columns in 2D array
 * @height: # of rows in 2D array
 *
 * Return: pointer to 2D array (Success), NULL (Failure)
 **/

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int *) * width);
		if (p[i] == NULL)
		{
			/* clear memory already alloc for height */
			for (k = i - 1; k >= 0; k--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
