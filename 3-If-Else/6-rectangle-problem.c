// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include<stdio.h>
int main(){
    float length,breadth;
    float area,perimeter;
    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter breadth: ");
    scanf("%f",&breadth);
    area = length * breadth;
    perimeter = (length + breadth)*2;
    if(area>perimeter)
    {
        printf("Area is greater\n");
    }
    if(area==perimeter){
        printf("Area is equivalent to perimeter\n");
    }
    else{
        printf("Perimeter is greater\n");
    }
    printf("Area : %f\n Perimeter : %f",area,perimeter);
    return 0;
}