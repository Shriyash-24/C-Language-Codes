// WAP to find duplicate element.
#include<stdio.h>
int main(){
    int arr[5] = {1,1,2,3,2};
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            if(arr[i] == arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}