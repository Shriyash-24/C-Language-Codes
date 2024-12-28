// Can I make an array of structures? Yes.
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    // pokemon arr[] --> array of structures.
    pokemon arr[3];

    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Charizard");

    arr[1].attack = 50;
    arr[1].hp = 100;
    arr[1].speed = 30;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"Charizard");


    arr[2].attack = 50;
    arr[2].hp = 100;
    arr[2].speed = 30;
    arr[2].tier = 'B'; 
    strcpy(arr[2].name,"Charizard");


    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].tier);
    }
}