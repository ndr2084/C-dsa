#include <stdio.h>
#include <stdlib.h>
#include "prioritynodes.h"

int main(void) {
    Node *node = NULL;   // Initial array pointer is NULL

    // Push and pop elements into the dynamic array
    push(3, 5, &node);
    push(1, 10, &node);
    push(2, 7, &node);
    printf("%d\n", pop(&node).priority);
    printf("%d\n", pop(&node).priority);
    printf("%d\n", pop(&node).priority);



    // Free the dynamically allocated memory
    if(node != NULL) {
        free(node);
        node = NULL;
    }
    return 0;
}
