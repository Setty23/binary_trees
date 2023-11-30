#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 *
 * Description: If parent already has a left child, the new node must
 *		take its place, and the old left child must be set as
 *				the left child of the new node.
 *
 * @parent: pointer to the node to insert the left child
 * @value: value to be stored in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *	parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left != NULL)
	{
		old_node = parent->left;
		old_node->parent = new_node;
		new_node->left = old_node;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;

	return (new_node);
}
