// Even or odd.
#include<Stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    n%2==0 ? printf("Even") : printf("Odd");
    return 0;
}