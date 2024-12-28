#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; // int* --> integer ka address store karta hai. 
    int** y = &x; // int** --> int* ka address store karta hai
    printf("%p\n",*x);
    printf("%p\n",**y);
}