// Q1. WAP to reverse the array using an extra array.

// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int brr[5];
//     for(int i=0;i<=4;i++){
//         brr[i] = arr[4-i];
//     }
//     for(int i=0;i<=4;i++){
//         arr[i] = brr[i];
//     }
//     for(int i=0;i<=4;i++){
//         printf("%d ",arr[i]);
//     }
// }

// WAP to reverse the array without using any extra array.
#include<stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 4;
    while(i<j){
        // arr[i] & arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<=4;i++){
        printf("%d index: %d\n",i,arr[i]);
    }
}