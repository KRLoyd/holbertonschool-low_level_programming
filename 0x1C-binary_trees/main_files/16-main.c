#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int perfect;

	root = binary_tree_node(NULL, 98);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);

	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	root->left->left = binary_tree_node(root->left, 10);
	root->right->left = binary_tree_node(root->right, 10);

	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);

	root->right->right->left = binary_tree_node(root->right->right, 10);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);

	root->right->right->right = binary_tree_node(root->right->right, 10);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);


	root->left->left->left = binary_tree_node(root->left->left, 100);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);



	perfect = binary_tree_is_perfect(NULL);
	printf("NULL Perfect?: %d\n\n", perfect);

	binary_tree_delete(root);


	root = binary_tree_node(NULL, 1);
	root->left = binary_tree_insert_left(root, 2);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);
	binary_tree_delete(root);


	root = binary_tree_node(NULL, 1);
	root->left = binary_tree_insert_left(root, 2);
	root->right = binary_tree_insert_right(root, 3);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);
	binary_tree_delete(root);


	root = binary_tree_node(NULL, 1);
	root->left = binary_tree_insert_left(root, 2);
	root->right = binary_tree_insert_right(root, 3);
	root->left->left = binary_tree_insert_left(root->left, 4);
	root->right->left = binary_tree_insert_left(root->right, 5);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);
	binary_tree_delete(root);


	root = binary_tree_node(NULL, 1);
	root->left = binary_tree_insert_left(root, 2);
	root->right = binary_tree_insert_right(root, 3);
	root->left->left = binary_tree_insert_left(root->left, 4);
	root->left->right = binary_tree_insert_right(root->left, 5);
	root->right->left = binary_tree_insert_left(root->right, 6);
	binary_tree_print(root);
	perfect = binary_tree_is_perfect(root);
	printf("Perfect: %d\n\n", perfect);
	binary_tree_delete(root);

	return (0);
}
