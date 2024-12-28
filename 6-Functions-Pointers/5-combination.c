#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}
int Combination(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    int ncr = Combination(n,r);
    printf("Factorial: %d",ncr);
    return 0;
}