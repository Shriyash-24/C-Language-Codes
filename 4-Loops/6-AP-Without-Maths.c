// AP - 4,7,10,13,16..UPTO N TERMS.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++){
        // Running the loop n times.
        printf("%d ",a);
        a+=3;
    }
    return 0;
}