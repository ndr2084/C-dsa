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
        if (fgets(line, sizeof(line), stdin) == NULL) {
            //ctrl + D
            printf("Done\n\n\n");
            break;
        }
        if (strlen(line) <= 1) //user hit enter
            continue;
        if (sscanf(line, "%d", &input) == 0) {
            printf("Invalid input\n");
            continue;
        }
        insert(input, &root);
    }
    inorder(&root);

}

/*
 *https://stackoverflow.com/questions/70908380/how-to-use-double-pointers-in-binary-search-tree-data-structure-in-c
 *
*/
