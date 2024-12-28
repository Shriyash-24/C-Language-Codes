#include<stdio.h>
int main(){
    int a[5]; // 5 dabbe create kar liya par value kon dalega usme.
    int b[5] = {2,4,6,8,10};
    b[2] = 100; // {2,4,100,8,10}
    float f[3] = {1.2,3.5,6,9};
    printf("%f",f[2]);
    char c[4] = {'a','n','Y','g'};
    printf("%c",c[3]);
    return 0;
}