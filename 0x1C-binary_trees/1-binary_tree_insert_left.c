#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node (Success), NULL (Failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	/* Allocate space for new node */
	new_left = malloc(sizeof(binary_tree_t));
	/* If allocation fails, return NULL */
	if (new_left == NULL)
		return (NULL);

	/* Initialize new node */
	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	if (parent == NULL)
		return (new_left);

	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left = new_left;
		new_left->left->parent = new_left;
	}
	else /* parent->left is NULL */
		parent->left = new_left;

	return (new_left);
}
