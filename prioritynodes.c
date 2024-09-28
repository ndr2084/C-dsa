#include <stdio.h>
#include <stdlib.h>
#include "priority_queue.h"
#include "algorithms.h"

int inc = 0;
void push(Node** node, int priority, int value) {
    inc++;
    Node* check = realloc(*node, inc * sizeof(Node));
    if(check == NULL) {
        printf("Error! No write to memory made\n");
        free(*node);
        *node = NULL;
        return;
    }
    *node = check;
    (*node)[inc - 1].value = value;
    (*node)[inc - 1].priority = priority;

    printf("priority: %d, value: %d successfully pushed\n", (*node)[inc -1].priority, (*node)[inc-1].value);
}

//simple linear search
Node pop(Node **node) {
    if (inc == 0) {
        printf("Array is empty, cannot pop.\n");
        return (Node){0, 0};  // Return an empty node if array is empty
    }
        // returns highest priority
        Node poppedNode = search(node, inc);

        inc--;

        // Resize the array using realloc to avoid memory waste
        Node *temp = realloc(*node, (inc) * sizeof(Node));

        // Check if memory reallocation was successful
        if (temp != NULL) {
            *node = temp;  // Update the pointer only if realloc succeeds
        }
        return poppedNode;
    }


