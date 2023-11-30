#include "binary_trees.h"

/**
 * binary_tree_is_leaf - short description
 *
 * Description: long description
 *
 * @node: argument_1 description
 *
 * Return: return description
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
