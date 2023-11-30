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
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (1 + traverse_node(tree->right) + traverse_node(tree->left));
	return (0);
}

/**
 * binary_tree_is_perfect - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	l = r = 0;

	if (!tree)
		return (0);
	l = traverse_node(tree->left);
	r = traverse_node(tree->right);
	if (l == r)
		return (1);
	return (0);
}
