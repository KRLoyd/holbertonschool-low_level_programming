#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes in a binary tree with at least 1 child
 * @tree: pointer to the root node of the tree to count nodes in
 * Return: number of nodes in the binary tree with child(ren)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes, lnodes, rnodes;

	/* initialize variables */
	nodes = 0;
	lnodes = 0;
	rnodes = 0;

	/* check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* evaluate left and right */
	lnodes = binary_tree_nodes(tree->left);
	rnodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;

	return (nodes + lnodes + rnodes);
}
