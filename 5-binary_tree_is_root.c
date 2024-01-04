#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: that node we chick it
 *
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL, || node == NULL)
		return (0);

	return (1);
}
