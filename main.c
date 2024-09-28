#include <stdio.h>
#include <stdlib.h>
#include "priority_queue.h"

int main() {
    Node *node = NULL;
    push(&node, 1,1);
    push(&node, 69,2);
    push(&node, 5,3);
    push(&node, 3,3);
    push(&node, 2,2);
    Node temp;
    temp = pop(&node);
    printf("Priority: %d, Value: %d successfullyPopped\n", temp.priority, temp.value);
    temp = pop(&node);
    printf("Priority: %d, Value: %d successfully Popped\n", temp.priority, temp.value);
    temp = pop(&node);
    printf("Priority: %d, Value: %d successfully Popped\n", temp.priority, temp.value);
    temp = pop(&node);
    printf("Priority: %d, Value: %d successfully Popped\n", temp.priority, temp.value);
    temp = pop(&node);
    printf("Priority: %d, Value: %d successfully Popped\n", temp.priority, temp.value);


    return 0;
}