#include <assert.h>
#include <stdio.h>
#include "queue.h"

void print_value(Node *node)
{
  printf("%d, ", node -> data);
}

void print_queue(Queue* q)
{
  queue_for_each(q, print_value);
  printf("\n");
}

int main(void)
{
  Queue queue;
  Queue *q = &queue;

  queue_initial(q);
  assert(queue_is_empty(q));
  for (int i = 0; i < 1000; i++)
    queue_enqueue(q, i);

  int front;
  queue_peek(q, &front);
  assert(front == 0);

  for (int i = 0; i < 1000; i++)
  {
    int value;
    queue_dequeue(q, &value);
    assert(value == i);
  }

  assert(queue_is_empty(q));
  for (int i = 0; i < 10; i++)
    queue_enqueue(q, i);
 
  print_queue(q);
}


