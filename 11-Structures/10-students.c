#include<stdio.h>
#include<string.h>
typedef struct student{
        int rno;
        char name[20];
        char dept[40];
        char course[50];
        int year;
    }student;

void check(student s1,student s2){
    if(s1.dept == s2.dept){
        printf("Same department");
    }
    else{
        printf("Different Department");
    }
}
int main(){
    student s1,s2;
    strcpy(s1.dept,"CS");
    strcpy(s2.dept,"Mech");
    check(s1,s2);
}