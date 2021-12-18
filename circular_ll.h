#ifndef CIRCULAR_LINKED_LIST
#define CIRCULAR_LINKED_LIST

typedef struct node
{
  int data;
  struct node *next;
} Node;

Node* cll_create_node(int data);
Node* cll_insert_at_start(Node* head, int data);
Node* cll_insert_after(Node* head, int data);
Node* cll_find(Node* head, int data);
Node* cll_delete_node(Node* head);
void cll_print_list(Node* head);

#endif
