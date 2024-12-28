#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d index of array: ",i);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("Sum: %d",sum);
    return 0;
}