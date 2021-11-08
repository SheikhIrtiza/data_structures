#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof arr / sizeof arr[0];
    int total = 0;
    printf("the sizeof arr %lu and the sizeof arr[0] %lu \n", sizeof arr, sizeof arr[0]);
    for (int i = 0; i < size; i++) {
        total = total + arr[i];
     } 
     printf("the sum of array = %d\n", total);
     return 0;   
    
}