#include "binary_trees.h"

/**
 * binary_tree_depth - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current_node;
	size_t depth = 0;

	if (tree == NULL)
		return (depth);
	current_node = (binary_tree_t *) tree;
	while (current_node->parent)
	{
		depth++;
		current_node = current_node->parent;
	}
	return (depth);
}
