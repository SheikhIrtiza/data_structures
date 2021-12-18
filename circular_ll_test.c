#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "circular_ll.h"

int main()
{
  Node *head = NULL;

  for (int i = 0; i < 10; i++)
    {
     head = cll_insert_at_start(head, i);
    }
  
  printf("Circular link list: \n");
  cll_print_list(head);

  Node *find_6 = cll_find(head, 6);
  assert(find_6 -> data == 6);
  head = cll_delete_node(find_6);

  printf("Circular list after deleting 6:\n");
  cll_print_list(head);
  
  cll_insert_after(head, 69);
  cll_insert_after(head, 70);

  printf("Circular list after two insert\n ");
  cll_print_list(head);

  cll_insert_at_start(head, 1052);
  printf("circular list after insert of 1052 at start:\n");
  cll_print_list(head);

  return 0;
}
