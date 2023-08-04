#include <stdio.h>
#include <assert.h>
#include "linked_list.h"
 
int main()
 {
  Node *values = NULL; 
  for(int i = 10; i > 0; i--)
  {
    values = insert_at_start(values, i); 
  }
    printf("Elements in linked list:\n");
    ll_print(values);

   Node *value_8 = ll_find(values, 8);

    ll_insert_before(values, value_8, 111);

   printf("Elements in linked list after inserting 111 before 8:\n");
   ll_print(values);

   ll_insert_before(values, value_8, 122);
   printf("Elements in linked list after inserting 122 before 111:\n");
   ll_print(values);

   ll_delete(values, value_8);
   printf("Elements in linked list after deleting element 8:\n");
   ll_print(values);
   
   Node *value_122 = ll_find(values, 122);
   ll_delete(values, value_122);
   printf("Elements in linked list after deleting 122:\n");
   ll_print(values);
   
  values = insert_at_start(values, 38);
  values = insert_at_start(values, 95);
  printf("linked list after inserting two new 38 and 95 elements at start:\n");
  ll_print(values);
  
  return 0;
}
