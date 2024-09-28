//
// Created by william on 28/09/24.
//
#include "algorithms.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>

int search(Node** node, int inc) {
    int priority = NINF;
    int index = 0;
    if(inc == 0) {
        printf("Error! Cannot search empty array");
        return 0;
    }

    for (int i = 0; i < inc; i++) {
        if (node[i] != NULL && (*node)[i].priority >= priority) {
            priority = (*node)[i].priority;
            index = i;
        }
    }
    return index;
}
