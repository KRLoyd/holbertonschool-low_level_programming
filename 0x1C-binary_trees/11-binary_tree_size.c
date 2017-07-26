#include "binary_trees.h"
/**
 * binary_tree_size - function to measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, lsize, rsize;

	/* initialize variables */
	size = 0;
	lsize = 0;
	rsize = 0;

	/* check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* get size of left and right */
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	/* add left and right, add 1 for current node */
	size = lsize + rsize + 1;
	return (size);
}
