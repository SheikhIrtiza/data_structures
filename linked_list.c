
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* ll_create_node(int data) 
{
  Node *node = calloc(1, sizeof(Node));
  node -> next = NULL;
  node -> data = data;
  return node;
}

Node* insert_at_start(Node *head, int data) 
{
  Node *newNode = ll_create_node(data);
  newNode -> next = head;
  return newNode;
}

Node* ll_insert_before(Node *head, Node *mark, int data) 
{
  if (head == mark)
    return insert_at_start(head, data);
  
  Node *parent = NULL;
  Node *n = head;
  for (; n != NULL && n != mark; n = n->next)
    parent = n;

  if (n == mark) 
  {
    Node *newNode = ll_create_node(data);
    newNode -> next = parent -> next; 
    parent -> next = newNode;
  }

  return head;
}

Node* ll_find(Node *head, int data) 
{
  Node *n = head;
  for (; n != NULL && n-> data != data; n = n-> next);
  return n;
}

Node* ll_delete(Node *head, Node *node) {
  if (head == NULL || node == NULL) 
  return head;
  
  if (head == node) 
  {
    head = head -> next;
    free(node);
    return head;
  }
  
  Node *parent = NULL;
  Node *n = head;
  for (; n != NULL && n != node; n = n-> next)
    parent = n;

  if ( n != NULL) 
  {
    parent -> next = n -> next;
    free(n);
  }

  return head;
}

void ll_print(Node *head) 
{
  Node *n = head;
     for (; n != NULL; n = n -> next)
       {
    printf("%d ", n -> data);
       }
  printf("\n"); 
}
