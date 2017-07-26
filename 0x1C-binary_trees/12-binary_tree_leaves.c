#include "binary_trees.h"
/**
 * binary_tree_leaves - function to count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count leaves in
 * Return: number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, lleaves, rleaves;

	/* initialize variables */
	leaves = 0;
	lleaves = 0;
	rleaves = 0;

	/* check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* evaluate left and right */
	lleaves = binary_tree_leaves(tree->left);
	rleaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		leaves = 1;

	return (leaves + lleaves + rleaves);
}
