#include <stdio.h>
#include <stdlib.h>
// including linked list
#include "linked_list.h"
// creating node
Node* ll_create_node(int data)
{
//   allocating memory
  Node *node = calloc(1, sizeof(Node));
  node -> data = data;
  node -> next = NULL;
  return node;
}

void ll_print_node(Node *head)
{
  Node *ptr = head;
  while(ptr != NULL)
    {
      printf("%d  ", ptr -> data);
      ptr = ptr -> next;
    }
    printf("\n");
}

Node* ll_find(Node *head, int data)
{
  Node *n = head;
  for(; n != NULL && n->data != data; n= n-> next);
    return n;
}
// inserting the node at the beginning of the linked list
Node* insert_at_start(Node *head, int data)
{
  Node *newNode = ll_create_node(data);
  newNode -> data = data;
  newNode -> next = head;
  return newNode;
}

Node* insert_at_end(Node *head, int data)
{
  Node *newNode = ll_create_node(data);
  newNode -> data = data;
  Node *p = head;
  while(p -> next != NULL)
    {
      p = p -> next;
    }
  p -> next = newNode;
  newNode -> next =NULL;
  return head;
}

Node* insert_after_node(Node *head, Node *node, int data)
{
  Node *newNode = ll_create_node(data);
  newNode -> data = data;
  newNode -> next = node -> next;
  node -> next = newNode;
  return head;
}

Node* insert_before_node(Node *head, Node *node, int data) 
{
  if (head == node)
    return insert_at_start(head, data);
  
  Node* p = NULL;
  Node* n = head;
  for (; n != NULL && n != node; n = n -> next)
    p= n;

  if (n == node) 
  {
    Node *newNode = ll_create_node(data);
    newNode -> next = p -> next; 
    p -> next = newNode;
  }

  return head;
}

Node* delete_first(Node *head)
{
  Node *ptr = head;
  head = head -> next;
  free(ptr);
 return head;
}

Node* delete_at_last(Node *head)
{
 Node *p = head;
 Node *q = head -> next;
 while(q->next != NULL)
 {
  p = p -> next;
  q = q -> next;
  }
  p -> next = NULL;
  free(q);
  return head;
  }

Node* delete_by_value(Node *head, int data)
{
   Node *p = head;
   Node *q = head -> next;
 while(q-> data != data && q -> next != NULL)
  {
      p = p -> next;
     q = q -> next;
  }
 
 if( q -> data = data)
  {
     p -> next = q -> next;
      free(q);
 return head;
  }
 }
