// A
// A B
// A B C 
// A B C D
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}