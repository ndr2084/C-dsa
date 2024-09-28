#include <stdio.h>
#include <stdlib.h>
#include "prioritynodes.h"

int main() {
    Node *node = NULL;
    push(&node, 1,1);
    push(&node, 2,2);
    push(&node, 69,2);
    push(&node, 3,3);
    push(&node, 5,3);
    Node temp;
    temp = search(&node);
    printf("Priority: %d, Value: %d Popped\n", temp.priority, temp.value);
    temp = search(&node);
    printf("Priority: %d, Value: %d Popped\n", temp.priority, temp.value);
    temp = search(&node);
    printf("Priority: %d, Value: %d Popped\n", temp.priority, temp.value);
    temp = search(&node);
    printf("Priority: %d, Value: %d Popped\n", temp.priority, temp.value);
    temp = search(&node);
    printf("Priority: %d, Value: %d Popped\n", temp.priority, temp.value);


    return 0;
}