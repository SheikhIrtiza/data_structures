#include <stdio.h>
void insertion_sort(int *ptr, int size)
{
  for(int i = 0; i < size; i++) //Loop for pass
    {
      printf("Working on the pass:-%d\n", i+1);
      int key = ptr[i];
      int j = i-1;
  while( j >= 0 && ptr[j] > key)//Loop for each comparision
    {
      ptr[j+1] = ptr[j];
      j--;
    }
       ptr[j+1] = key;
    }
}

void print_array(int *ptr, int size)
{
  for(int i = 0; i < size; i++)
    {
      printf("%d ", ptr[i]);
    }
  printf("\n");
}

int main()
{
  int arr[] = { 2, 3, 6, 7, 8, 9, 0, 1, 5, 4, 10};
  int size = sizeof arr/ sizeof arr[0];

  printf("Array befor sort:-");
  print_array(arr, size);

  insertion_sort(arr, size);

  printf("Array after sort:- ");
  print_array(arr, size);

  return 0;
}


// TIME COMPLEXITY:- worst case:- O(n square).
//                   Best case :- O(n) when array is already sorted.
// It is  a Stable algorithm
// it is  an adaptive algorithm.
