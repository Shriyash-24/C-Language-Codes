// Find the factorial of first n numbers.
#include <stdio.h>
int main()
{
    int n, product=1, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("The factorial of %d is: %d\n",i,product);
    }
}