#include <stdio.h>
#include <assert.h>

int sum_recursive(int num)
{
  assert(num >= 0);
  if(num == 0)
    return num;
  else
    return (num+sum_recursive(num - 1));
}
  int main(void)
{
  int num, sum;
  printf("Enter any positive number\n");
  scanf("%d", &num);
  sum = sum_recursive(num);
  printf("sum is %d\n", sum);
  return 0;
}
