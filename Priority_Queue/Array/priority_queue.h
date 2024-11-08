#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include "node.h"

void push(Node** node, int priority, int value);
Node pop(Node** node);
void peek(Node **node);

#endif