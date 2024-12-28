// Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element.
#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    for(int i=0;i<=8;i++){
        sum = sum + arr[i];
    }
    int sum2 = 55;
    int diff = sum2 - sum;
    printf("%d",diff);
}