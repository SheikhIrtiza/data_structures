#include <stdio.h>
#include <stdlib.h>
#include "circular_ll.h"

Node* cll_create_node(int data)
{
  Node *node = calloc(1, sizeof(Node));
  node->next = node;
  node->data = data;
  return node;
}

Node* cll_insert_at_start(Node *head, int data)
{
  Node *newNode = cll_create_node(data);

  if (head == NULL)
    return newNode;
  
  Node *p = head;
  for (; p -> next != head; p = p -> next);

  p -> next = newNode;
  newNode -> next = head;
  return newNode;
}
Node* cll_insert_after(Node *head, int data)
{
  Node *newNode = cll_create_node(data);

  if (head == NULL)
    return newNode;

  newNode -> next = head -> next;
  head -> next = newNode;
  return newNode;
} 

Node* cll_delete_node(Node *node)
{
  if (node == NULL)
    return NULL;

  Node *ptr = node;
  for ( ; ptr -> next != node; ptr = ptr->next);

  Node *head;
  if (ptr != node)
   {
     ptr -> next = node -> next;
     head = node->next;
  }
  else
    {
    head = NULL;
    }

  free(node);
  return head;
}

Node* cll_find(Node *head, int data)
{
  if (head == NULL)
    return NULL;
  
  Node *match = NULL;
  Node *ptr = head;
  do {
    if (ptr -> data == data)
      {
      match = ptr;
      break;
    }

    ptr = ptr -> next;
  } while (ptr != head);
    
  return match;
}

void cll_print_list(Node* head)
{
  if (head == NULL)
    return;

  Node *ptr = head;
  do {    
    printf("%d ", ptr -> data);
    ptr = ptr -> next;
  }while (ptr != head);
  
  printf("\n");
}
