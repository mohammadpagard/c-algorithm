#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"


int main() {
    Node *head = NULL;  // start node of the linked list
    Node *new_node;

    new_node = initialNodeSingly(10);
    insertLastSingly(&head, new_node);

    for(int i = 0; i <= 7; i++)
    {
        new_node = initialNodeSingly(i);
        // insertLast(&head, new_node);
        insertBeginSingly(&head, new_node);
    }

    new_node = initialNodeSingly(45);
    insertBeginSingly(&head, new_node);

    new_node = initialNodeSingly(46);
	insertPositionSingly(&head, new_node, 3);	// insert at position

    displaySingly(&head);   // show the list before deletion action

    deletePositionSingly(&head, 2); // delete at position
    displaySingly(&head);   // show the list after deletion action

    // Free the memory used for the nodes
    while (head != NULL) {
        Node *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}
