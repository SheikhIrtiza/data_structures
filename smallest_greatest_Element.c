#include <stdio.h>

 int smallestElement(int *ptr, int size)
 {
   int smallest = ptr[0];
   //  printf("Our assumed smallest = %d \n", smallest);
   for (int i = 1; i < size; i++)
   {
     if(smallest > ptr[i])
     {
       smallest = ptr[i];
     }
   }
   return smallest; 
  
 }

 int greatestElement(int *ptr, int size)
 {
   int greatest = ptr[0];
   //printf("our assumed greater = %d\n ", greatest); 
   for (int i = 1; i < size; i++)
   {
     if(greatest< ptr[i])
     {
       greatest = ptr[i];
     }
   }
   return greatest; 
 }

 void print_array(int *ptr, int size)
  {
    printf("Your array is:- ");
     for(int i=0; i<size; i++)
       {
 	 printf("%d ", ptr[i]);
       }
     printf("\n");
  }
    
 int main()
  {
    int arr[] = {2,3,1,10,5,35,0,12,15,16};
    int smallest = 0;
    int greatest = 0;
    int size = sizeof arr/ sizeof arr[0];
  
    print_array(arr, size);
    smallest = smallestElement(arr, size);
  
   greatest = greatestElement(arr,size);
  
   printf("The smallest number is %d\n", smallest);

  printf("The greatest number is %d\n", greatest);

  return 0;
 }

 // Time complexity= O(n)
