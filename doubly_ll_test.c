#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "doubly_ll.h"

int main(void) {
  DNode *head = NULL;

  for (int i = 0; i < 10; i++)
    head = dll_insert_at_start(head, i);

  printf("Print the doubly linked list:- \n");
  dll_print_list(head); 

  assert(dll_find(head, 25) == NULL);

  DNode *find_4 = dll_find(head, 4);
  dll_insert_before(find_4, 13);
  dll_insert_after(find_4, 12);
  printf("list after insert before and after 4:\n");
  dll_print_list(head);
  
 printf("Deleting the no 4\n");
  head = dll_delete_node(head, find_4);
  dll_print_list(head);
  
  head = dll_insert_at_start(head, 45);
  head = dll_insert_at_start(head, 68);
  printf("doubly list after insterting 45 and 68:-\n");
  dll_print_list(head);
  
  assert(dll_find(head, 8) != NULL);
  
  DNode *find_12 = dll_find(head ,12);
  printf("Deleting the element 12 \n");
  dll_delete_node(head, find_12);
  dll_print_list(head);  
  
 DNode *find_s = dll_find(head, 1);

 dll_insert_before(find_s, 101);
 printf("After insert before 1 :\n");
 dll_print_list(head);
 
 
 dll_insert_after(find_s, 201);
 printf("After insert after 1:\n");
 dll_print_list(head);
 
 assert(dll_find(head, 109) != NULL);
 
return 0;
}
