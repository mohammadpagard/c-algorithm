#ifndef BST
#define BST

#include <stdbool.h>
#include "binary_tree.h"

TreeNode* insertBSTRecursive(TreeNode* root, int value);
TreeNode* insertBST(TreeNode* root, int value);

TreeNode* searchNodeBSTRecursive(TreeNode* root, int key);
bool searchNodeBST(TreeNode* root, int key);

TreeNode* findMin(TreeNode* root);
TreeNode* deleteNodeBST(TreeNode* root, int key);

void findPredecessorSuccessor(TreeNode* root, TreeNode** predecessor, TreeNode** successor, int key);



void run_bst_example();

#endif	// BST
