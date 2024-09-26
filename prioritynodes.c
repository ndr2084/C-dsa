#include "prioritynodes.h"
#include <stdio.h>
#include <stdlib.h>

// Push a new Node onto the dynamic array
int size = 0;
void push(int priority, int value, Node **node) {
    size++;
    // Reallocate memory to accommodate the new node
    Node *temp = realloc(*node, (size) * sizeof(Node));

    // Check if memory allocation was successful
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Update the node pointer
    *node = temp;

    // Add the new node to the last position
    (*node)[(size) - 1].value = value;
    (*node)[(size) - 1].priority = priority;
    printf("Priority:%d\nValue:%d\n", (*node)[(size) -1].priority, (*node)[(size) -1].value);
}

// Pop a Node from the dynamic array
Node pop(Node **node) {
    if (size == 0) {
        printf("Array is empty, cannot pop.\n");
        return (Node){0, 0};  // Return an empty node if array is empty
    }

    // Get the last node (the one to be popped)
    Node poppedNode = (*node)[(size) - 1];

    size--;

    // Resize the array using realloc to avoid memory waste
    Node *temp = realloc(*node, (size) * sizeof(Node));

    // Check if memory reallocation was successful
    if (temp != NULL) {
        *node = temp;  // Update the pointer only if realloc succeeds
    }

    // Return the popped node
    return poppedNode;
}
