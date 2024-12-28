// WAP to print the row number having the maximum sum in a given matrix.
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,2},{2,3}};
    int maxSum = 0;
    int maxSum_i;
    for(int i=0;i<2;i++){
        int sum = 0;;
        for(int j=0;j<2;j++){
            sum = sum + arr[i][j];
            if(maxSum<sum){
                maxSum = sum;
                maxSum_i = i;
            }
        }
    }
    printf("Maximum Sum: %d\n",maxSum);
    printf("Row Number: %d",maxSum_i);
    return 0;
}