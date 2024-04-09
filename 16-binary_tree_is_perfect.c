#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;
	const binary_tree_t *node = tree;


	if (tree == NULL)
		return (0);

	while (node->left != NULL)
	{
		height_left++;
		node = node->left;
	}
	node = tree;

	while (node->right != NULL)
	{
		height_right++;
		node = node->right;
	}
	if (height_left != height_right)
		return (0);

	if (tree->left && !binary_tree_is_perfect(tree->left))
		return (0);

	if (tree->right && !binary_tree_is_perfect(tree->right))
		return (0);

	return (1);
}
