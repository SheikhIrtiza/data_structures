#include<stdio.h>
#include<assert.h>

int findindex(int *ptr, int size, int num){
for(int i = 0; i<size; i++){
    if (ptr[i] == num)
    return i;

     }
     return -1;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9, 10, 30};

    int arr[] = sizeof arr/ sizeof arr[0];

int num = 3;    
}
int result = findindex(arr, size, num);

printf("the index of %d is present at %d", num, result);

assert(findindex(arr, 4, 2) == 1);
assert(findindex(arr, 4, 2) == 2);
assert(findindex(arr, 4, 2) == 3);
assert(findindex(arr, 4, 2) == 4);
assert(findindex(arr, 4, 2) == 5);
assert(findindex(arr, 4, 2) == 6);
assert(findindex(arr, 4, 2) == 7);

return 0;
}