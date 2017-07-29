#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 (Perfect), 0 (Not perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int currentlevel;
	unsigned int templevel;

	currentlevel = 0;
	templevel = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0
	    && binary_tree_is_full(tree)
	    && leaf_check(tree, &currentlevel, templevel))
		return (1);
	else
		return (0);

}
/**
 * leaf_check - checks that all leaves of a binary tree are at the same level
 *
 * @tree: pointer to the root of the tree to check
 * @currentlevel: pointer to an un int representing level of tree
 * @depthlevel: unsigned int to compare
 * Return: 1 (same level leaves), 0 (differenct level leaves)
 */
int leaf_check(const binary_tree_t *tree,
	       unsigned int *currentlevel,
	       unsigned int depthlevel)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*currentlevel == 0)
		{
			*currentlevel = depthlevel;
			return (1);
		}

		return (depthlevel == *currentlevel);
	}
	return (leaf_check(tree->left, currentlevel, depthlevel + 1)
		&& leaf_check(tree->right, currentlevel, depthlevel + 1));
}

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
