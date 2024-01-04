#include "binary_trees.h"

/**
 * binary_tree_node - creat a binary tree node
 * @parent: pointer to a parent of new node
 * @value: the value of new node
 *
 * Return: NULL or Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_trees_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
