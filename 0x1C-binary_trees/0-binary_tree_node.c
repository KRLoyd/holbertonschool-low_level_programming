#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node being created
 * @value: value to put in the new node
 *
 * Return: pointer to the created node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Allocate memory for the new node */
	new = malloc(sizeof(binary_tree_t));
	/* Return NULL if allocation fails */
	if (new == NULL)
		return (NULL);

	/* Initialize new node */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/* Return pointer to the new node upon success */
	return (new);
}
