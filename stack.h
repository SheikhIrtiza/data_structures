 #include <stdbool.h>
 #define MAXSTACK 100

 #ifndef STACK_H
 #define STACK_H

 typedef char StackEntry;

 typedef struct stack
{
  int tos;
  StackEntry elements[MAXSTACK];
}Stack;

 void stack_init(Stack *stack);
 void stack_push(Stack *stack, StackEntry item);
 void stack_pop(Stack *stack, StackEntry* item);
 bool stack_is_empty(Stack *stack);
 bool stack_is_full(Stack *stack);
 void stack_clear(Stack *stack);
 void stack_print(Stack *stack);
 int stack_count(Stack *stack);

#endif
