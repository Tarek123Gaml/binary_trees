#include "binary_trees.h"

/**
 * binary_tree_preorder - traversal the binary tree
 * @tree: root of node
 * @func: function w need prompot
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (trr && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
