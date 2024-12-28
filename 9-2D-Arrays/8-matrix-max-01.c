// Given a matrix having 0-1 only, find the row with the maximum number of 1's.
#include<stdio.h>
int main(){
    int arr[2][2] = {{1,0},{1,1}};
    int maxCount = 0;
    int maxIndex = -1;
    for(int i=0;i<2;i++)
    {
        int count = 0;
        for(int j=0;j<2;j++){
            if(arr[i][j] == 1){
                count++;
            }
            if(maxCount<count){
                maxCount = count;
                maxIndex = i;
            }
        }
    }
    printf("%d\n",maxCount);
    printf("%d",maxIndex);
}