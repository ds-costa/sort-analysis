#ifndef NODE_H
#define NODE_H

typedef struct node {
    int data;
    struct node* next;
    struct node* prev;
} Node;

/**
 * function: new_node
 * Return a linked list node 
 * @param key, new node key
 * @param value, new node value
 * return: a linked list node
 */
Node *new_node(int data);

#endif