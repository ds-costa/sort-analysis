#include <stdio.h>
#include <stdlib.h>
#include "node.h"

/**
 * function: new_node
 * Return a linked list node 
 * @param key, new node key
 * @param value, new node value
 * return: a linked list node
 */
Node *new_node(int data) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}