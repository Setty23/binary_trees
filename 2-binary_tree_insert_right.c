#include "binary_trees.h"

/**
 * binary_tree_insert_right - short description
 *
 * Description: long description
 *
 * @parent: argument_1 description
 * @value: argument_2 description
 *
 * Return: return description
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;
	if (parent->right != NULL)
	{
		old_node = parent->right;
		old_node->parent = new_node;
		new_node->right = old_node;
	}
	else
	{
		new_node->right = NULL;
	}
	parent->right = new_node;

	return (new_node);
}
