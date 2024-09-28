//
// Created by william on 28/09/24.
//
#include "algorithms.h"
#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

Node search(Node** node, int inc) {
    int priority = NINF;
    int index = 0;
    if(inc == 0) {
        printf("Error! Cannot search empty array");
        return (Node){0,0};
    }

    for (int i = 0; i < inc; i++) {
        if (node[i] != NULL && (*node)[i].priority >= priority) {
            priority = (*node)[i].priority;
            index = i;
        }
    }
    Node highPriority = (*node)[index];
    (*node)[index] = (*node)[inc - 1];

    return highPriority;
}
