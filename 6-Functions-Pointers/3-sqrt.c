#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("The square root is : %d\n",root);

    int power = pow(2,6);
    printf("The power is %d",power);
}