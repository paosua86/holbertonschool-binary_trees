#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, tree_left, tree_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	tree_left = binary_tree_height(tree->left);
	tree_right = binary_tree_height(tree->right);
	if (tree_left < tree_right)
		height = tree_right + 1;
	else
		height = tree_left + 1;
	return (height);
}
