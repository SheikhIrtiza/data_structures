 #include <stdio.h>
 #include <assert.h>

 int find_index(int *ptr, int size, int num)
 {
   for (int i=0; i<size; i++)
   
     {
       if(ptr[i] == num)
       return i;
     }
   return -1;
 }



 int main()
  {
    int arr[] = {1, 4, 5, 7, 8, 9, 14};
    int  num = 9;
    int size = sizeof arr/sizeof arr[0];
    int result = find_index(arr, size, num);
    printf("Index of the element %d found at arr[%d]\n", num, result);

       assert(find_index(arr, size, 1) == 0);
       assert(find_index(arr, size, 4) == 1);
       assert(find_index(arr, size, 5) == 2);
       assert(find_index(arr, size, 7) == 3);
       assert(find_index(arr, size, 8) == 4);
       assert(find_index(arr, size, 9) == 5);
       assert(find_index(arr, size, 14) == 6);
       assert(find_index(arr, size, 15) == -1);
       assert(find_index(arr, size, 1) == 10);
       return 0;
  }

// Time complexity:- O(n)
