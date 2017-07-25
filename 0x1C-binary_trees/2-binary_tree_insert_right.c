#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	/* Allocate space for new node */
	new_right = malloc(sizeof(binary_tree_t));
	/* If allocation fails, return NULL */
	if (new_right == NULL)
		return (NULL);

	/* Initialize new node */
	new_right->n = value;
	new_right->parent = parent;
	new_right->right = NULL;
	new_right->right = NULL;

	if (parent == NULL)
		return (new_right);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right = new_right;
		new_right->right->parent = new_right;
	}
	else /* parent->right is NULL */
		parent->right = new_right;

	return (new_right);
}
