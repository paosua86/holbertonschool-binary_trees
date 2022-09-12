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

	if (tree == NULL)
		return (0);

	tree_left = binary_tree_height(tree->left);
	tree_right = binary_tree_height(tree->right);
	if (tree_left < tree_right)
		height = tree_right + 1;
	else
		height = tree_left + 1;
	return (height);
}

/**
 * binary_tree_balance -  function that measures the balance
 * factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure
 * the balance factor
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
