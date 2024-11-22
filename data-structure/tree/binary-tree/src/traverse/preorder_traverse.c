#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../../include/traverse.h"
#include "../../include/stack.h"


void preorderIterator(TreeNode *root) {
    if(root == NULL)
    {
        printf("Tree Is Empty !\n");
        return;
    }

    StackNode *top = NULL;  // initialize the stack
    push(&top, root);   // push the root node onto the stack

    while(!isEmpty(top))
    {
        TreeNode *current = pop(&top);  // pop the top node from the stack
        printf(" %d ", current->data);  // print the current ndoe's data

        /*  push the right child first because the stack is FILO(First In Last Out)
            then the left child push onto the stack and the last left child is the top node
        */
        if(current->right != NULL) push(&top, current->right);  // push the right child first
        if(current->left != NULL) push(&top, current->left);    // push the left chile
    }
}

void preorderRecursive(TreeNode *node) {
    /*  preorder traverse on the binary tree

        @node: pointer to the current node being visited

        print the value of the current node, then recursively traverse
        the left subtree and the right subtree

        Preorder( V L R )
    */
    
    if(node == NULL) return;

    printf(" %d ", node->data); // print the data of the current node
    preorderRecursive(node->left);   // recursively traverse the left subtree
    preorderRecursive(node->right);  // recursively traverse the right subtree
}
