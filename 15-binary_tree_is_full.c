#include "binary_trees.h"

/**
 * traverse_node - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
int traverse_node(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (traverse_node(tree->right) && traverse_node(tree->left));
	return (0);
}

/**
 * binary_tree_is_full - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (traverse_node(tree));
}
