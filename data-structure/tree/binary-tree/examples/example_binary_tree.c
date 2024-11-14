#include <stdio.h>
#include <stdlib.h>

#include "../include/binary_tree.h"


void run_binary_tree_example() {
    /*  creates a simple binary tree structure

        The tree structure created:
            1
           / \
          2   3
         / \
        4   5
           /
          6
    */

    Node *root_node;

    printf("Running Binary Tree Example...\n");

    root_node = initializeNode(1);  // initialize the root node with a value of 1

    // create left and right children of the root node
    root_node->left = initializeNode(2);
    root_node->right = initializeNode(3);

    // create left and right children of the left node
    root_node->left->left = initializeNode(4);
    root_node->left->right = initializeNode(5);

    root_node->left->right->left = initializeNode(6);   // create a left child for the node with value 5

    // print the height of the binary tree from the root node
    printf("The height of the root node is: %d\n", heightNode(root_node));

    // print the total quantity of the leafs and total quantity of the nodes from a node
    printf("The total quantity of leafs from the node is: %d\n", leafQuantity(root_node));
    printf("The total quantity of nodes: %d\n", nodesQuantity(root_node));


    // delete the whole tree
    printf("\nDelete the whole tree:\n");
    deleteTree(&root_node);
}