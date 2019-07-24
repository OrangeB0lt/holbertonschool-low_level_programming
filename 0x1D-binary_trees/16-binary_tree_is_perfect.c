#include "binary_trees.h"
/**
 * power - gets power between two input numbers]
 * @first: num to find power of
 * @second: power number
 * Return: returns first to the power of second
 */
int power(int first, int second)
{
	int idx, num;

	num = 1;
	for (idx = 0; idx < second; idx++)
		num *= first;
	return (num);
}

/**
 * heighter_checker - measures height of tree
 * @tree: pointer to root
 * Return: returns max number
 */
size_t height_checker(const binary_tree_t *tree)
{

	int max = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (height_checker(tree->left) < height_checker(tree->right))
		max = height_checker(tree->right);
	else
		max = height_checker(tree->left);
	return (1 + max);
}
/**
 * 
 * 
 * 
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_size(tree->left) + 1 + tree_size(tree->right));
}
/**
 * 
 * 
 * 
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tSize, tHeight;
	double tMath;

	if (tree == NULL)
		return (0);
	
	tHeight = height_checker(tree);
	tSize = tree_size(tree);
	tMath = power(2,(tHeight + 1)) - 1;

	if (tMath == tSize)
		return (1);
	return (0);
}