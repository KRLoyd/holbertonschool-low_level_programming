#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to evaluate
 * Return: 0 (not full), 1 (full)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((binary_tree_is_full(tree->left) == 1) &&
	    (binary_tree_is_full(tree->right) == 1))
		return (1);

	else
		return (0);

}
