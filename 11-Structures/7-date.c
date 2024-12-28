#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    typedef struct dates{
        int date;
        int month;
        int year;
    } dates;
    dates a,b;
    a.date = 5;
    a.month = 12;
    a.year = 1999;
    b.date = 19;
    b.month = 1;
    b.year = 2023;
//     if(a==b){ // You can't compare two user defined datatypes, you have to compare individually.
//         printf("Equal");
//     }
//     else{
//         printf("Not equal");
//     }
// }
    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("Equal");
    else printf("Not equal");
}

