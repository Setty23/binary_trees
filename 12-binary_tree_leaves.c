#include "binary_trees.h"

/**
 * binary_tree_leaves - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0 + binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
}
