// https://www.geeksforgeeks.org/c/doubly-linked-list-in-c/

#ifndef NODE_H_
#define NODE_H_

#include <stddef.h>

typedef struct Node {
  int value;
  int key;
  struct Node *next;
  struct Node *prev;
} Node;

// Create Node
Node *createNode(int value, int key);

// Insert Node
void insertAtBeginning(Node **head, int value, int key);
void insertAtEnd(Node **head, int value, int key);
void insertAtPosition(Node **head, int value, int key, int position);

// Delete Node
void deleteAtBeginning(Node **head);
void deleteAtEnd(Node **head);
void deleteAtPosition(Node **head, int position);

#endif //  NODE_H_
