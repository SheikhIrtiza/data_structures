#include <stdio.h>

void bubble_sort(int *ptr, int size)
{
   for(int i = 0; i < size; i++) //For number of pass.
    {
      printf("Working on pass number %d\n", i+1);
     int  array_sorted = 1;
      for(int j = 0; j < size-1-i; j++)//For comparision in each pass.
	{
	//printf("comparision:- %d", j);
	if(ptr[j] > ptr[j+1])
	  {  
	      int temp = ptr[j];
	      ptr[j] = ptr[j+1];
	      ptr[j+1] = temp;
	      array_sorted = 0;
	    }
	}
      if(array_sorted)
	return;
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
  int arr[] = {6, 2, 4, 3, 9, 5, 7, 8, 0, 1};
  //  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof arr/ sizeof arr[0];
  
  printf("Array before sort:-");
  print_array(arr, size);
  bubble_sort(arr, size);
  printf("Array after sort:-");
  print_array(arr, size);

  return 0;
}

//TIME COMPLEXITY:-worst & average: O(n square) when array is in reverse ordeer.
//                Best case :- O(n) when the array is already sorted.
// It is a Stable algorithm
// It is an adaptive algorithm.
