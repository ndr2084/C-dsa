#include <stdio.h>
#include <stdlib.h>
#include "prioritynodes.h"

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

    printf("priority: %d, value: %d\n successfully pushed\n", (*node)[inc -1].priority, (*node)[inc-1].value);
}

Node pop(Node** node) {
    return (Node){0, 0};
}
Node search(Node** node) {
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
    Node temp = (*node)[index];
    (*node)[index] = (*node)[inc - 1];
    (*node)[inc - 1] = temp;

    inc--;
    Node *check = realloc(*node, inc * sizeof(Node));
    if(check != NULL) {
        *node = check;
}
    return (*node)[index];
}

