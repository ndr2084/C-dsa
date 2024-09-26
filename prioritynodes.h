#ifndef PRIORITYNODES_H
#define PRIORITYNODES_H

// Define a custom struct for Node
typedef struct {
 int value;
 int priority;
} Node;

// Function prototypes
void push(int priority, int value, Node **node);
Node pop(Node **node);


#endif
