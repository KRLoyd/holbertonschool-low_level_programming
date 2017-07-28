#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 (Perfect), 0 (Not perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	static unsigned int depth;


	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		depth = 0;


	/* Is this a single node binary tree? */
	if (tree->parent == NULL
	    && tree->left == NULL
	    && tree->right == NULL)
		return (1);

	depth++;

	/* Are left child and right child both perfect? */
	if (binary_tree_is_perfect(tree->left)
	    && binary_tree_is_perfect(tree->right))
		return (1);

	if (binary_tree_leaves(tree) == 1)
	{
		if (binary_tree_depth(tree) != depth)
			return (0);
	}

	/* Check if left child and right child are full */
	/* and if the depths match */
	if ((binary_tree_is_full(tree->left)
	     && binary_tree_is_full(tree->right))
	    && ((binary_tree_height(tree->left)
		 == binary_tree_height(tree->right))))
		return (1);

	return (0);
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
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, lheight, rheight;


	height = 0;
	lheight = 0;
	rheight = 0;

	if (tree == NULL)
		return (0);

	/* Get height of left */
	if (tree->left != NULL)
	{
		lheight = binary_tree_height(tree->left);
		lheight += 1;
	}
	else /* no left child */
		lheight = 0;

	/* Get height of right */
	if (tree->right != NULL)
	{
		rheight = binary_tree_height(tree->right);
		rheight += 1;
	}
	else /* no right child */
		rheight = 0;

	/* compare left and right heights; set height to larger of the two */
	if (lheight >= rheight)
		height = (lheight);
	else /* lheight < rheight */
		height = (rheight);

	return (height);
}
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
