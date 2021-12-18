#include <stdio.h>
#include <assert.h>
#include "stack.h"

void pop_and_print(Stack* stack)
{
   while (!stack_is_empty(stack))
   {
      StackEntry item;
      stack_pop(stack, &item);
     //stack_print(stack);//this wll remove each element removed.
      printf(" %c, ", item);
   }
   printf("\n");
}

int main(void)
{
  Stack s;
  Stack* stack = &s;
  StackEntry a[] = {'s', 'a', 'l', 'm', 'a', 'a', 'n', ' ', 'M', 'u', 's', 'h', 't', 'a', 'q', '\0'};

  //initialize the stack
   stack_init(stack);

  //checking that stack is empty  
  assert(stack_is_empty(stack));

  //push the values into the stack
  for(int i = 0; a[i] != '\0'; i++)
    stack_push(stack, a[i]);
  
  assert(stack_count(stack) == 15); 
  assert(!stack_is_empty(stack));
  
  printf("Push:\n");
  stack_print(stack);
  
  int count = stack_count(stack);
   printf("Number of elements in a stack:- %d\n", count);
  
  // pop value and print it
  printf("pop and print:- \n");
  pop_and_print(stack);
  
 
  return 0;
}
