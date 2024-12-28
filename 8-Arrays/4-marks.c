// Print index of those where marks are less than 35.
#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Value of %d index: ",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
}