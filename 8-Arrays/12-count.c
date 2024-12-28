// Count the number of elements in given array, greater than a given number x.

#include<stdio.h>
int main(){
    int count = 0;
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        // I just took 4 as a given number.
        if(arr[i]>4){
            count++;
        }
    }
    printf("%d",count);
}