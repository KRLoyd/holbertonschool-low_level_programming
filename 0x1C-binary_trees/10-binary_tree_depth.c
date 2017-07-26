#include "binary_trees.h"
/**
 * binary_tree_depth - function to measure the depth of a node in a binary tree
 *
 * @node: pointer to the node to measure the depth of
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	const binary_tree_t *ptr;
	size_t depth;

	ptr = NULL;
	depth = 0;

	if (node == NULL)
		return (0);

	ptr = node;
	while (ptr->parent != NULL)
	{
		depth++;
		ptr = ptr->parent;
	}

	return (depth);
}
