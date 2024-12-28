// Given array, and a number 'x'. Find out if 'x' lies in the array or not. If yes, then print the index.

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4;
    bool flag = false; // not present
    for(int i=0;i<=6;i++){
        if(arr[i] == x){
            flag = true; // element is present.
            break;
        }
    }
    if(flag==false){
        printf("%d is not present");
    }
    else{
        printf("Present");
    }
    return 0;
}