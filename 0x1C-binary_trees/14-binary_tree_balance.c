#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor for the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, lheight, rheight;

	if (tree == NULL)
		return (0);

	balance = 0;
	lheight = 0;
	rheight = 0;

	lheight = max_tree_height(tree->left);
	rheight = max_tree_height(tree->right);

	balance = lheight - rheight;
	return (balance);
}

/**
 * max_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: Height of the tree
 */
size_t max_tree_height(const binary_tree_t *tree)
{
	size_t height, lheight, rheight;


	height = 0;
	lheight = 0;
	rheight = 0;

	if (tree == NULL)
		return (0);

	/* Get height of left */
	lheight = max_tree_height(tree->left);
	lheight += 1;

	/* Get height of right */
	rheight = max_tree_height(tree->right);
	rheight += 1;

	/* compare left and right heights; set height to larger of the two */
	if (lheight >= rheight)
		height = (lheight);
	else /* lheight < rheight */
		height = (rheight);

	return (height);
}
