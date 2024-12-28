// A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold record of 3 such cricketer and then WAP to read these records.

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfMatches;
        float average;
    } cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        printf("Enter cricketer name: \n");
        scanf("%s",arr[i].name);
        printf("Enter cricketer age: \n");
        scanf("%d",&arr[i].age);
        printf("Enter no of matches played:: \n");
        scanf("%d",&arr[i].noOfMatches);
        printf("Enter cricketer average: \n");
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].age);
        printf("%d\n",arr[i].noOfMatches);
        printf("%f\n",arr[i].average);
        printf("\n\n");
    }
   return 0;
}