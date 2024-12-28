#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y; // a ki value change hoo gyi. a = b
    *y = temp; // *y = 2 --> b=2
    return;
}
int main(){
    int a,b,temp;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    // Using temp.
    // temp=a;
    // a=b;
    // b=temp;
    // Without using temp.
    // a = a+b;
    // b = a-b;
    // a = a-b;

    swap(&a,&b);
    printf("Values of A and B are: %d and %d ",a,b);
    return 0;
}