// program to find the factorial of a number
#include <stdio.h>
#include <assert.h>
int fact(int num)
{
  assert( num >= 0);
  if(num == 1)
    return 1;
  else 
    return (num*fact(num - 1));
}

int main(void)
{
  int num, fac;
  printf("Enter any number:\n");
  scanf("%d", &num);
  printf("Factorial of %d is %d\n", num, fact(num));
  assert(fact(5) == 10);
  return 0;
}
