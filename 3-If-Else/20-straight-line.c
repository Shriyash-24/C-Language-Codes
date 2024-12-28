// Given three points (x1,y1),(x2,y2),(x3,y3),WAP to program to check if all the three points lie on the straight line.
#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3,m1,m2;  
    printf("Enter the values for 3 points: ");
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Straight Line");
    }
    else{
        printf("Not Straight Line");
    }
    return 0;
}