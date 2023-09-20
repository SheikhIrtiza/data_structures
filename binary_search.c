 #include <stdio.h>
 #include <stdbool.h>
 #include <assert.h>

 int binary_search(int arr[], int low, int high, int target)
 {
   int left = low;
   int right = high;
   int result = -1; // int result = 0;

   while(left <= right)  
   {
      int  mid = (left+right)/2;
      int  midValue = arr[mid];
       if(target == midValue)
 	 {
	   result = mid; //result = 1;
	   break;
	 }
       else if(target > midValue)
 	 {
	   left = mid + 1;
	 }
       else
	 {
	   right = mid - 1;
	 }
   }
   /* if(result == 1)
    {
      printf("%d found\n", target);

    }
  else
    {
      printf("%d not found\n", target);
      }*/
  return result;
 }

 int main()
 {
   int arr[] = {2, 4, 5, 7, 8, 9, 19, 21, 25}; 
   int length = sizeof arr/ sizeof arr[0];
   int low = 0;
   int high = length;
   int target = 69;
   binary_search(arr, low, high, target);
   assert(binary_search(arr, low, length, 21) == 7);
   assert(binary_search(arr, low, length, 25) == 8);
   assert(binary_search(arr, low, length,  9) == 5);
   assert(binary_search(arr, low, length, 29) == -1);
   assert(binary_search(arr, low, length, 24) == 1);
 
	 return 0;
 }
	
  
