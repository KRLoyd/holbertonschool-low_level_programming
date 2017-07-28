#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle of
 * Return: pointer to the uncle node or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ptr;

	ptr = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	ptr = node->parent;

	if (ptr->parent->left == NULL || ptr->parent->right == NULL)
		return (NULL);
	else if (ptr->parent->left == ptr)
		return (ptr->parent->right);
	else /* ptr->left != node */
		return (ptr->parent->left);
}
