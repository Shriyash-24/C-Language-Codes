// WAP to take n number of integers as input and display them.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    int* ptr = (int*) malloc(n*sizeof(int));
    int* p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int *t = p;
    for(int i=1;i<=n;i++){
        printf("%d ",(*p));
        p++;
    }
}