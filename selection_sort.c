#include <stdio.h>

void selection_sort(int *ptr, int size)
{
  for(int i = 0; i< size; i++)//For number of  pass.
    {
      printf("Working on pass number :- %d\n", i+1); 
      int min_index = i;
      for(int j = i+1; j<size; j++)// For number of comparisions.
	{
	  //printf("Working on comparision no : %d\n",j);
	  if(ptr[min_index] > ptr[j])
	    min_index = j;
	}
      //swap ptr[i] & ptr{min_index]
      int temp = ptr[i];
      ptr[i] = ptr[min_index];
      ptr[min_index] = temp;
    }
}

void print_array(int *ptr, int size)
{
  for(int i=0; i<size; i++){
    printf("%d ", ptr[i]);
    }
  printf("\n");
}

 int main()
{
  int arr[] =  {6, 2, 4, 3, 9, 5, 7, 8, 0, 1};
  int size = sizeof arr/ sizeof arr[0];
  
  printf("Array before sort:-");
  print_array(arr, size);
  selection_sort(arr, size);
  printf("Array after sort:-");
  print_array(arr, size);

  return 0;
}

// Time complexity:- O(n square)
// Not a Stable algorithm
// Not an adaptive algorithm.
