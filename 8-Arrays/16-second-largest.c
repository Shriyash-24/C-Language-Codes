#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {-10,-4,-2,-8,-19,-5,-12};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<=6;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",smax);
    return 0;
}