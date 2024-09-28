#ifndef PRIORITYNODES_H
#define PRIORITYNODES_H
#define NINF -100;

typedef struct {
    int priority;
    int value;
}Node;

void push(Node** node, int priority, int value);
Node pop(Node** node);
Node search(Node** node);

#endif