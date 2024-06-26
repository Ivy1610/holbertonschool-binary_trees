#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (tree->left) ? binary_tree_balance(tree->left) + 1 : 0;
	right_height = (tree->right) ? binary_tree_balance(tree->right) + 1 : 0;

	return (left_height - right_height);
}


