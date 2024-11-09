//
// Created by Nathan on 11/7/24.
//
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void get_new_node(int data, BST_node_t **root) {
    *root = malloc(sizeof(BST_node_t));
    (*root)->data = data;
    (*root)->l = NULL;
    (*root)->r = NULL;
}

void insert(int data, BST_node_t **root) {
    BST_node_t* parent = *root;
    BST_node_t* current = NULL;

    while(parent != NULL) {
        current = parent;
        if(data < parent->data) {
            parent = parent->l;
        }
        else {
            parent = parent->r;
        }
    }
    if(current == NULL) {
        get_new_node(data, root);
    }
    else if (data < current->data) {
        get_new_node(data, &current->l);
    }
    else {
        get_new_node(data, &current->r);
    }
    return root;
}

void inorder(BST_node_t **root) {
    if(*root != NULL) {
        inorder(&(*root)->l);
        printf("%d\n", (*root)->data);
        inorder(&(*root)->r);
    }

}



