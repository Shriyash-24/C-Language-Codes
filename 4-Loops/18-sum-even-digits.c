// WAP To Print sum of all even digits of a given number.
#include <stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        a=n%10;
        n=n/10;
        if(a%2==0){
            sum=sum+a;
        }
    }
    printf("%d",sum);
}