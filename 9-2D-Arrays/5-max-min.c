#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int max = INT_MIN;
    int min = INT_MAX;
    int max_i;
    int min_i;
    int max_j;
    int min_j;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                max_i= i;
                max_j = j;
            }
            if(min>arr[i][j]){
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    printf("Maximum of the array: %d & it's index is (%d,%d)\n",max,max_i,max_j);
    printf("Minimum of the array: %d & it's index is (%d,%d)",min,min_i,min_j);
}