#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to determine if a node is a leaf
 *
 * @node: pointer to the node to evaluate
 * Return: 1 (Node is a leaf), 0 (Node is not a leaf)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	else /* Node has child(ren) */
		return (0);
}
