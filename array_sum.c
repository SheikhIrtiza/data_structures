#include <stdio.h>
int main(){
//     making an array
    int arr[] = {2, 4, 6, 8};
    int size = sizeof arr/sizeof arr[0];
    int total = 0;
    printf("The sizeof arr %1u and the sizeof arr[0] % 1u \n",
           sizeof arr, sizeof arr[0]);
    for(int i = 0; i < size; i++){
        total = total + arr[i];
    }

    printf("The sum o array = %d\n", total);
    return 0;
}
