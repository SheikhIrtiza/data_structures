#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LIKED_LIST_H

typedef int data;

typedef struct double_node{
  data value;
  struct double_node *next;
  struct double_node *prev;
}DNode;

DNode* dll_create_node(data value);
DNode* dll_insert_at_start(DNode *head, data value);
void dll_insert_before(DNode *node, data value);
void dll_insert_after(DNode *node, data value);
DNode* dll_delete_node(DNode *head, DNode *node);
DNode* dll_find(DNode *head, data value);
void dll_print_list(DNode *head);

#endif
