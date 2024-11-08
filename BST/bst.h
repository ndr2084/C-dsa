//
// Created by william on 11/7/24.
//

#ifndef BST_H
#define BST_H

/*OBJECTS*/
typedef struct BST {
    struct BST *l;
    struct BST *r;
    int data;
} BST_node_t;


/*SUPPORTED FUNCTIONS*/
BST_node_t *get_new_node(int data);

BST_node_t *insert(int data, BST_node_t *root);

BST_node_t *search(int data, BST_node_t);

void inorder(BST_node_t *root);


#endif //BST_H
