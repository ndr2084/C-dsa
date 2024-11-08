//
// Created by william on 11/7/24.
//
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

BST_node_t *get_new_node(int data) {
    BST_node_t *new_node = malloc(sizeof(BST_node_t));
    new_node->data = data;
    new_node->l = NULL;
    new_node->r = NULL;
    return new_node;
}

BST_node_t *insert(int data, BST_node_t *root) {
    BST_node_t* parent = root;
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
        root = get_new_node(data);
    }
    else if (data < current->data) {
        current->l = get_new_node(data);
    }
    else {
        current->r = get_new_node(data);
    }
    return root;
}

void inorder(BST_node_t *root) {
    if(root != NULL) {
        inorder(root->l);
        printf("%d\n", root->data);
        inorder(root->r);
    }

}



