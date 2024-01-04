#include "binary_trees.h"

/**
 * binary_tree_postorder - traversal the binary tree
 * @tree: root of node
 * @func: function w need prompot
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
