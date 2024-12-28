#include<stdio.h>
#include<string.h>

typedef struct person {
    int age;
    float weight;
} person;

void change(person* p){

    // 1st method
    // (*p).age = 70;
    // (*p).weight = 90.9;

    //2nd method
    p->age = 70;
    p->weight = 90.9;
    return;
}

int main(){
    person p1 = {23,56.7}; // Follow the structure while initializing like this.
    change(&p1);
    printf("%d\n",p1.age);
    printf("%f",p1.weight);
}