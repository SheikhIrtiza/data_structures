#include <stdio.h>
#include <assert.h>
#include "linked_list.h"


int main()
{
   
  Node *values = NULL;
  for(int i = 0; i < 10; i++)
    {
    values = insert_at_start(values, i);
    }
  printf("Elements before insert: \n");
  ll_print_node(values);
  
  Node *index = ll_find(values, 6);
  Node *find_s = ll_find(values, 5);
  
  values = insert_at_start(values, 96);
  values = insert_at_end(values, 45);
  values = insert_after_node(values, index, 36);
  printf("Elements after insert: \n");
  ll_print_node(values);
  
  values = insert_after_node(values, find_s, 42);
  printf(" list after insert 42\n");
  ll_print_node(values);
  
  values = insert_before_node(values, find_s, 64);
  printf("list after insert 64\n");
  ll_print_node(values);
  
  values = delete_first(values);
  printf("Elements after delete of first:\n");
  ll_print_node(values);
  
  values = delete_at_last(values);
  printf("Elements after delete of last:\n");
  ll_print_node(values);
  
  
  values = insert_at_end(values, 123);
  printf("123 added in the list\n");
  ll_print_node(values);
  
  values = delete_by_value(values, 123);
  printf("123 deleted from link list\n");
  ll_print_node(values);
  
  return 0;
}
