#include "binary_trees.h"
/**
 * binary_tree_is_root - Function to determine if node is a root
 *
 * @node: pointer to node to evaluate
 * Return: 1 (node is root), 0 (node is not root)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else /* Node has a parent */
		return (0);
}
