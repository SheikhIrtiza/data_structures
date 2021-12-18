 #include <stdio.h>
 #include <stdbool.h>

 bool linear_search(int arr[], int size, int n)
 {
   bool element_found = false;
   for(int i=0; i<size; i++)
     {
       if( arr[i] == n)
 	{
 	  element_found = true;
          break;
  	}
     }
   return element_found;
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
   int arr[] = {1, 3, 4, 5, 6, 7, 34, 9, 10};
   int size = sizeof arr/ sizeof arr[0];
   int n = 34;
     print_array(arr, size);
   /* int n;
     printf("Enter the number you want to search\n");
     scanf("%d", &n);*/
   if(linear_search(arr, size, n))
      printf("Number %d present in the array\n", n);
   else
      printf("Number %d not present in the array\n", n);

   return 0;
 }
