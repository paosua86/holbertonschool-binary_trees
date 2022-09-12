#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left, tree_right;

	if (tree == NULL)
		return (0);

	tree_left = binary_tree_height(tree->left);
	tree_right = binary_tree_height(tree->right);
	if (tree_left >= tree_right)
		return (tree_left + 1);

	return (tree_right + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
