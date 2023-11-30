#include "binary_trees.h"

/**
 * binary_tree_postorder - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 * @func: argument_2 description
 *
 * Return: return description
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
