#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

int main() {
    BST_node_t *root = NULL;
    while (1) {
        int input;
        char line[128];
        printf("input number> ");
        if (fgets(line, sizeof(line), stdin) == NULL) //user input is ctrl + D
            break;
        if (strlen(line) <= 1) //user hit enter
            continue;
        if (sscanf(line, "%d", &input) == 0) {
            printf("Invalid input\n");
            continue;
        }
        root = insert(input, root);
    }
    inorder(root);
}
