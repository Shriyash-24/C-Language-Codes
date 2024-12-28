// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include<stdio.h>
int main(){
    int r,s,a;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s){
        if(r<a){
            printf("Youngest is Ram Ji");
        }
        else{
            printf("Youngest is Ajay Ji");
        }
    }
    else{
        if(s<a){
            printf("Youngest is Shyam Ji");
        }
        else{
            printf("Youngest is Ajay Ji");
        }
    }
    return 0;
}