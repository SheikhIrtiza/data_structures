#include <stdio.h>
#include <stdlib.h>
#include "doubly_ll.h"

DNode* dll_create_node(data value)
{
  DNode *node = calloc(1, sizeof(DNode));
  node -> value = value;
  node -> prev = NULL;
  node -> next = NULL;
  return node;
}

DNode* dll_insert_at_start(DNode *head, data value)
{
  DNode *newNode = dll_create_node(value);
  newNode -> next = head;
  if(head)
    head -> prev = newNode;
  return newNode;
}

void dll_insert_before(DNode *node, data value)
{
  DNode *newNode = dll_create_node(value);
  DNode *OrigPrev = node -> prev;
//   pointing the new node at the last of the linked list
  node -> prev = newNode;
  newNode -> prev = OrigPrev;
  newNode -> next = node;
  if(OrigPrev)
    OrigPrev -> next = newNode;
}

void dll_insert_after(DNode *node, data value)
{
  DNode *newNode = dll_create_node(value);
  DNode *OrigNext = node -> next;
  node -> next = newNode;
  newNode -> next = OrigNext;
  newNode -> prev = node;
  if(OrigNext)
    OrigNext -> prev = newNode;
}
DNode* dll_delete_node(DNode *head, DNode *node)
{
  if(node)
  {
    DNode *prev = node -> prev;
  if(prev)
    prev -> next = node ->next;

  DNode *next = node -> next;
  if(next)
    next -> prev = prev;

  free(node);

  return head == node ? next: head;
}
 return head;
}

DNode* dll_find(DNode *head, data value)
{
  DNode *p = head;
  for (; p != NULL && p->value != value; p = p->next);
  return p;
}

void dll_print_list(DNode *head)
{
  DNode *node = head;
  while(node != NULL)
    {
      printf("%d ", node->value);
     node =  node-> next;
    }
    printf("\n");
}

