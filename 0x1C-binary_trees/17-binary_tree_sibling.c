#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling of
 * Return: pointer to the sibling node or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr;

	ptr = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	ptr = node->parent;

	if (ptr->left == NULL || ptr->right == NULL)
		return (NULL);
	else if (ptr->left == node)
		return (ptr->right);
	else /* ptr->left != node */
		return (ptr->left);
}
