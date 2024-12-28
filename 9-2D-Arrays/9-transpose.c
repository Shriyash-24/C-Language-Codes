// WAP to print transpose of the matrix.
#include<stdio.h>
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int brr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            brr[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}