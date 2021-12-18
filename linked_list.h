#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node{
  int data;
  struct node *next;
}Node;

Node* ll_create_node(int data);

void ll_print_node(Node *head);

Node* insert_at_start(Node *head, int data);

Node* insert_at_end(Node *head, int data);

Node* insert_after_node(Node *head, Node *node, int data);

Node* insert_before_node(Node *head, Node *node, int data);

Node* delete_first(Node *head);

Node* delete_at_last(Node *head);

Node* delete_by_value(Node *head, int data);

Node* ll_find(Node *head, int data);
#endif
