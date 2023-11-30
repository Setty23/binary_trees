#include "binary_trees.h"

/**
 * binary_tree_sibling - short description
 *
 * Description: long description
 *
 * @node: argument_1 description
 *
 * Return: return description
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}
