#include "binary_trees.h"

/**
 * void binary_tree_delete - function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: a pointer to the newly created node or NULL upon failure
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
