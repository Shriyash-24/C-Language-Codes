#include<stdio.h>
#include<stdlib.h>
int main(){
    int* pter = (int*) malloc(10*sizeof(int));
    pter++;
    printf("%d",*pter); // Garbage Value.
    // calloc will contain 0 as default value.
}